#include "Button.h"

Button::Button(sf::RenderWindow& window, int x, int y, int size, std::string content) : GuiItem(window, x, y, size)
{
	_content = content;
}

Button::~Button()
{
	
}

void Button::Draw()
{
	
}