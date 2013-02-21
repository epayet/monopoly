#include "GraphicEngine.h"
#include "GuiManager/GuiManager.h"

GraphicEngine::GraphicEngine(sf::RenderWindow &window) : _window(window)
{
	_guiManager = new GuiManager(_window);
}

GraphicEngine::~GraphicEngine()
{
	delete _guiManager;
}

void GraphicEngine::HandleEvent(sf::Event event)
{
	if(event.Type == sf::Event::Closed)
		_window.Close();
	
	_guiManager->HandleEvent(event);
}

void GraphicEngine::Draw()
{
	_guiManager->Draw();
}

GuiManager* GraphicEngine::GetGuiManager()
{
	return _guiManager;
}

sf::RenderWindow &GraphicEngine::GetWindow()
{
	return _window;
}