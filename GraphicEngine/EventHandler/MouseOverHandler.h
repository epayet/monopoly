/* 
 * File:   MouseOverHandler.h
 * Author: manu
 *
 * Created on 21 février 2013, 23:36
 */

#ifndef MOUSEOVERHANDLER_H
#define	MOUSEOVERHANDLER_H

#include "EventHandler.h"

class MouseOverHandler : public EventHandler
{
    public:
        MouseOverHandler(GuiItem* guiItem);
        bool IsTriggered(sf::Event);
};

#endif	/* MOUSEOVERHANDLER_H */

