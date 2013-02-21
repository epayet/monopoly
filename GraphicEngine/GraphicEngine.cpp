#include "GraphicEngine.h"
#include "GuiManager/GuiManager.h"
#include "Constant.h"
#include "Police.h"
#include <stdio.h>

GraphicEngine::GraphicEngine(int sizex, int sizey, std::string windowName)
{
    _window.Create(sf::VideoMode(sizex, sizey, 32), windowName);
    _guiManager = new GuiManager(_window);

    _police = new Police(Constant::PolicePath);
}

GraphicEngine::~GraphicEngine()
{
    delete _guiManager;
    delete _police;
}

void GraphicEngine::Run()
{
    while (_window.IsOpened())
    {
        sf::Event event;
        while (_window.GetEvent(event))
        {
            if (event.Type == sf::Event::Closed)
                _window.Close();

            _guiManager->HandleEvent(event);
        }

        _window.Clear();
        _guiManager->Draw();
        _window.Display();
    }
}

void GraphicEngine::HandleEvent(sf::Event event)
{
    if (event.Type == sf::Event::Closed)
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

sf::Font GraphicEngine::GetFont()
{
    return _police->GetFont();
}