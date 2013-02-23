#include "TextBlock.h"

TextBlock::TextBlock(sf::RenderWindow& window, int state, int x, int y, int size, sf::Font font, std::string content) : GuiItem(window, state, x, y)
{
	_font = font;

	_content.SetText(content);
	_content.SetFont(_font);
	_content.SetSize(size);
	_content.SetPosition(x, y);
	_content.SetColor(sf::Color(255, 255, 255));

	_sizex = _content.GetRect().GetWidth();
	_sizey = _content.GetRect().GetHeight();
}

void TextBlock::Draw(int state)
{
	if(CanDraw(state))
		_window.Draw(_content);
}

void TextBlock::SetContent(std::string content)
{
    _content.SetText(content);
}