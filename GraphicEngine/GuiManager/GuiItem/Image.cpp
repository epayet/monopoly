#include "Image.h"

Image::Image(sf::RenderWindow& window, int state, int x, int y, std::string filePath) : GuiItem(window, state, x, y)
{
	SetFilePath(filePath);
    _sprite.SetPosition(x, y);
	_sizex = _image.GetWidth();
	_sizey = _image.GetHeight();
}

void Image::Draw(int state)
{
	if(CanDraw(state))
	{
		_window.Draw(_sprite);
	}
}

void Image::SetFilePath(std::string filePath)
{
    _image.LoadFromFile(filePath);
	_sprite.SetImage(_image);
}

void Image::SetX(int x)
{
    GuiItem::SetX(x);
    _sprite.SetPosition(_x, _y);
}

void Image::SetY(int y)
{
    GuiItem::SetY(y);
    _sprite.SetPosition(_x, _y);
}