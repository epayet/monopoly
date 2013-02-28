/* 
 * File:   GraphicEngine.h
 * Author: manu
 *
 * Created on 21 février 2013, 10:14
 */

#ifndef GRAPHICENGINE_H
#define	GRAPHICENGINE_H

#include <SFML/Graphics.hpp>


class GuiManager;
class Police;
class ActionListener;

class GraphicEngine
{
public:
	GraphicEngine(int sizex, int sizey, std::string windowName);
	~GraphicEngine();
	GuiManager* GetGuiManager();
	sf::RenderWindow &GetWindow();
	void Run();
	sf::Font GetFont();
	void SetState(int state);
    int GetState();
    void Draw();
    void AddListener(ActionListener*);

private:
	GuiManager* _guiManager;
	sf::RenderWindow _window;
	Police* _police;
	int _state;
    std::vector<ActionListener*> _listeners;
};

#endif	/* GRAPHICENGINE_H */

