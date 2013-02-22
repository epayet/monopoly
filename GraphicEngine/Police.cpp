#include "Police.h"
#include <stdio.h>

Police::Police(std::string filePath)
{
	// open file in binary mode
	FILE* fp = fopen(filePath.data(), "rb");
	// seek to end of file then get file size
	fseek(fp, 0, SEEK_END);
	_file_size = ftell(fp);
	// allocate memory for the file
	_buffer = (char*) malloc(_file_size + 1);
	// copy file into buffer
	fseek(fp, 0, SEEK_SET);
	fread(_buffer, 1, _file_size, fp);
	// close file
	fclose(fp);

	_font.LoadFromMemory(_buffer, _file_size);
}

Police::~Police()
{
	free(_buffer);
}

sf::Font Police::GetFont()
{
	return _font;
}