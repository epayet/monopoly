#include "GuiManager.h"
#include "GuiItem/GuiItem.h"

GuiManager::GuiManager(sf::RenderWindow& window) : _window(window)
{
	
}

GuiManager::~GuiManager()
{
	for(int i=0; i<_guiItems.size(); i++)
		delete _guiItems[i];
}

void GuiManager::AddGuiItem(GuiItem* guiItem)
{
	_guiItems.push_back(guiItem);
}

void GuiManager::HandleEvent(sf::Event event, int state)
{
	for(int i=0; i<_guiItems.size(); i++)
	{
		_guiItems[i]->HandleEvent(event, state);
	}
}

void GuiManager::Draw(int state)
{
	for(int i=0; i<_guiItems.size(); i++)
	{
		_guiItems[i]->Draw(state);
	}
}