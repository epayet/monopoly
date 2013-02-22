#include "TextBlock.h"

TextBlock::TextBlock(sf::RenderWindow& window, int state, int x, int y, int size, sf::Font font, std::string content) : GuiItem(window, state, x, y)
{
	_font = font;
	
	_text.SetText(content);
    _text.SetFont(_font);
    _text.SetSize(size);
    _text.SetPosition(x, y);
    _text.SetColor(sf::Color(255, 255, 255));

    _sizex = _text.GetRect().GetWidth();
    _sizey = _text.GetRect().GetHeight();
}

void TextBlock::Draw(int state)
{
	if(_state == state)
		_window.Draw(_text);
}