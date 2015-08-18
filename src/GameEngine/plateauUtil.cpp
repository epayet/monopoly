#include "plateauUtil.h"
#include "Case/Case.h"
#include "Case/Carte/Carte.h"
#include <cstdio>

Case* make_case()
{
    return NULL;
}

Carte* tirer_carte(std::queue<Carte*> &cartes, bool remettreSousLeTas)
{
    Carte* carteTiree = cartes.front();

    if (remettreSousLeTas)
    {
        cartes.pop();
        cartes.push(carteTiree);
    }

    return carteTiree;
}
