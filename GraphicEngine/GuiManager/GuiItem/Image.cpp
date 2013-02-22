#include "Image.h"

Image::Image(sf::RenderWindow& window, int state, int x, int y, std::string filePath) : GuiItem(window, state, x, y)
{
	_image.LoadFromFile(filePath);
	_sprite.SetImage(_image);
	_sizex = _image.GetWidth();
	_sizey = _image.GetHeight();
}

void Image::Draw(int state)
{
	if(_state == state)
	{
		_window.Draw(_sprite);
	}
}