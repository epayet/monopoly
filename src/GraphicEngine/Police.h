/* 
 * File:   Police.h
 * Author: manu
 *
 * Created on 21 février 2013, 22:33
 */

#ifndef POLICE_H
#define	POLICE_H

#include <SFML/Graphics.hpp>

class Police
{
public:
	Police(std::string filePath);
	~Police();
	sf::Font GetFont();

private:
	char* _buffer;
	long _file_size;
	sf::Font _font;
};

#endif	/* POLICE_H */

