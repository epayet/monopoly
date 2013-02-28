#include "PayerConstructions.h"
#include "GameEngine/Case/Case.h"
#include "GameEngine/Plateau.h"

PayerConstructions::PayerConstructions(Plateau *plateau, int numero, std::string libelle, TYPECARTE typeCarte, int sommeMaisons, int sommeHotels) : Carte(plateau, numero, libelle, typeCarte)
{
    _sommeMaisons = sommeMaisons;
    _sommeHotels = sommeHotels;
}


void PayerConstructions::Agir(Joueur *joueur, BilletManager *billetManager)
{
    _plateau->GetPaquetCartes(_typeCarte).push(this);
}

int PayerConstructions::SommeAPayer()
{
    /*
    nbMaisons, nbHotels, i = 0;
    std::vector<Proprietes*> proprietes;
    proprietes = _plateau->GetJoueurActuel()->GetProprietes();
    for(i=0; i<proprietes[i].size(); i++)
    {
        if(proprietes[i]->GetNbMaisons == 5)
            nbHotels++;
     else if(proprietes[i]->GetNbMaisons > 0)
            nbMaisons++;
    }
    return ((nbMaisons*_prixMaisons)+(nbHotels*_prixHotels));
    */
}

std::string PayerConstructions::GetMessage()
{
    return _libelle;
}

ACTION PayerConstructions::DoitPayer(Joueur *joueur)
{
    return DOITPAYER;
}
