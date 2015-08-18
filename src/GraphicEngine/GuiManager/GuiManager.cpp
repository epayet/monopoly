#include "GuiManager.h"
#include "GuiItem/GuiItem.h"

GuiManager::GuiManager(sf::RenderWindow& window) : _window(window)
{

}

GuiManager::~GuiManager()
{
	for(int i = 0; i < _guiItems.size(); i++)
		delete _guiItems[i].second;
}

void GuiManager::AddGuiItem(std::string key, GuiItem* guiItem)
{
	GuiItemDictonnary guiItemDictionnary;
	guiItemDictionnary.first = key;
	guiItemDictionnary.second = guiItem;
	_guiItems.push_back(guiItemDictionnary);
}

void GuiManager::HandleEvent(sf::Event event, int state)
{
	for(int i = 0; i < _guiItems.size(); i++)
	{
		_guiItems[i].second->HandleEvent(event, state);
	}
}

void GuiManager::Draw(int state)
{
	for(int i = 0; i < _guiItems.size(); i++)
	{
		_guiItems[i].second->Draw(state);
	}
}

GuiItem* GuiManager::GetGuiItem(std::string key)
{
	for(int i = 0; i < _guiItems.size(); i++)
	{
		if(key == _guiItems[i].first)
			return _guiItems[i].second;
	}

	return NULL;
}