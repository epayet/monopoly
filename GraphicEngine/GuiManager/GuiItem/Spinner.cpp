#include <sstream>
#include "Spinner.h"
#include "GraphicEngine/ActionListeners/SpinnerOnClickListener.h"
#include "GraphicEngine/GuiManager/CallBackManager.h"

Spinner::Spinner(sf::RenderWindow& window, int state, int x, int y, int size, sf::Font font, int min, int max) : GuiItem(window, state, x, y, size, size)
{
	_nb = min;
	_min = min;
	_max = max;
	
	_font = font;

	int startxArrows = GetStartXArrows();
	
	Update();
    _nbString.SetFont(_font);
    _nbString.SetSize(size / 2);
    _nbString.SetPosition(x + 5, y + 5);

	_rect = sf::Shape::Rectangle(x, y, x + size, y + size, sf::Color(0, 0, 0), 1, sf::Color(255, 255, 255));
	_upRect = sf::Shape::Rectangle(startxArrows, y, x + size, y + size / 2, sf::Color(0, 0, 0), 1, sf::Color(255, 255, 255));
	_downRect = sf::Shape::Rectangle(startxArrows, y + size / 2, x + size, y + size, sf::Color(0, 0, 0), 1, sf::Color(255, 255, 255));

	SpinnerOnClickListener* onClickListener = new SpinnerOnClickListener(this);
	CallBackManager* callBackManager = new CallBackManager(ONCLICK, onClickListener, this);
	_callBackManagers.push_back(callBackManager);
}

void Spinner::Draw(int state)
{
	if(_state == state)
	{
		_window.Draw(_rect);
		_window.Draw(_upRect);
		_window.Draw(_downRect);
		_window.Draw(_nbString);
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
	// créer un flux de sortie
    std::ostringstream oss;
    // écrire un nombre dans le flux
    oss << _nb;
    // récupérer une chaîne de caractères
	_nbString.SetText(oss.str());
}

int Spinner::GetStartXArrows()
{
	return _x + _sizex - (_sizex / 6);
}