#include "Spinner.h"
#include "../../ActionListeners/SpinnerOnClickListener.h"
#include "../../GuiManager/CallBackManager.h"
#include "../../../util.h"

Spinner::Spinner(sf::RenderWindow& window, int state, int x, int y, int size, sf::Font font, int min, int max) : GuiItem(window, state, x, y, size, size)
{
	_nb = min;
	_min = min;
	_max = max;

	_font = font;

	int startxArrows = GetStartXArrows();

	_plus.SetText("+");
	_plus.SetPosition(startxArrows + 2, y + 2);
	_plus.SetSize(size / 3);
	_moins.SetText("-");
	_moins.SetPosition(startxArrows + 2, y + (size / 2) + 2);
	_moins.SetSize(size / 3);

	Update();
	_nbString.SetFont(_font);
	_nbString.SetSize(size / 2);
	_nbString.SetPosition(x + 5, y + 5);

	_rect = sf::Shape::Rectangle(x, y, x + size, y + size, sf::Color(0, 0, 0), 1, sf::Color(255, 255, 255));
	_upRect = sf::Shape::Rectangle(startxArrows, y, x + size, y + size / 2, sf::Color(0, 0, 0), 1, sf::Color(255, 255, 255));
	_downRect = sf::Shape::Rectangle(startxArrows, y + size / 2, x + size, y + size, sf::Color(0, 0, 0), 1, sf::Color(255, 255, 255));

	_listeners.push_back(new SpinnerOnClickListener(ONCLICK, this));
}

void Spinner::Draw(int state)
{
	if(CanDraw(state))
	{
		_window.Draw(_rect);
		_window.Draw(_upRect);
		_window.Draw(_downRect);
		_window.Draw(_nbString);
		_window.Draw(_plus);
		_window.Draw(_moins);
	}
}

int Spinner::GetNb()
{
	return _nb;
}

void Spinner::Up()
{
	if(_nb < _max)
	{
		_nb++;
		Update();
	}
}

void Spinner::Down()
{
	if(_nb > _min)
	{
		_nb--;
		Update();
	}
}

void Spinner::Update()
{
	_nbString.SetText(intToString(_nb));
}

int Spinner::GetStartXArrows()
{
	return _x + _sizex - (_sizex / 5);
}