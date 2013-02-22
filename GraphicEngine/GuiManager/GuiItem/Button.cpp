#include "Button.h"
#include "GraphicEngine/GuiManager/CallBackManager.h"
#include "GraphicEngine/ActionListeners/ButtonMouseOverListener.h"
#include "GraphicEngine/ActionListeners/ButtonMouseOutListener.h"

Button::Button(sf::RenderWindow& window, int state, int x, int y, int size, sf::Font font, std::string content) : GuiItem(window, state, x - MARGIN / 2, y - MARGIN / 2)
{
	_font = font;

	_text.SetText(content);
	_text.SetFont(_font);
	_text.SetSize(size);
	_text.SetPosition(x, y);
	_text.SetColor(sf::Color(0, 0, 0));

	_sizex = _text.GetRect().GetWidth() + MARGIN * 2;
	_sizey = _text.GetRect().GetHeight() + MARGIN * 2;

	_rect = sf::Shape::Rectangle(_x - MARGIN / 2, _y - MARGIN / 2, _x + _sizex, _y + _sizey, sf::Color(255, 255, 255));

	ButtonMouseOverListener* mouseOverListener = new ButtonMouseOverListener(this);
	CallBackManager* mouseOverCallBack = new CallBackManager(MOUSEOVER, mouseOverListener, this);
	_callBackManagers.push_back(mouseOverCallBack);

	ButtonMouseOutListener* mouseOutListener = new ButtonMouseOutListener(this);
	CallBackManager* mouseOutCallBack = new CallBackManager(MOUSEOUT, mouseOutListener, this);
	_callBackManagers.push_back(mouseOutCallBack);
}

void Button::Draw(int state)
{
	if(_state == state)
	{
		_window.Draw(_rect);
		_window.Draw(_text);
	}
}

sf::String &Button::GetText()
{
	return _text;
}