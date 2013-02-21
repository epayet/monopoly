#include "GraphicEngineOwner.h"
#include "GraphicEngine.h"

GraphicEngineOwner::GraphicEngineOwner(int sizex, int sizey, std::string windowName)
{
	_window.Create(sf::VideoMode(sizex, sizey, 32), windowName);
	_graphicEngine = new GraphicEngine(_window);
}

GraphicEngineOwner::~GraphicEngineOwner()
{
	delete _graphicEngine;
}

void GraphicEngineOwner::Run()
{
	while(_window.IsOpened())
	{
		sf::Event event;
		while(_window.GetEvent(event))
		{
			_graphicEngine->HandleEvent(event);
		}

		_window.Clear();	
		_graphicEngine->Draw();
		_window.Display();
	}
}