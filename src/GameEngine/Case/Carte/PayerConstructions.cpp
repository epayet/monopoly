#include "PayerConstructions.h"
#include "../../Plateau.h"
#include "../../Participant/Cagnotte.h"
#include "../Propriété/Propriete.h"
#include "../Propriété/Domaine.h"

PayerConstructions::PayerConstructions(Plateau *plateau, std::string libelle, TYPECARTE typeCarte, int sommeMaisons, int sommeHotels) : Carte(plateau, libelle, typeCarte)
{
    _sommeMaisons = sommeMaisons;
    _sommeHotels = sommeHotels;
}

void PayerConstructions::Agir(Joueur *joueur, BilletManager *billetManager)
{
    if (billetManager != NULL)
        _plateau->GetCagnotte()->GetBilletManager()->Ajouter(billetManager);
}

int PayerConstructions::SommeAPayer()
{
    int nbMaisons = 0, nbHotels = 0, i = 0;
    std::vector<Propriete*> proprietes;
    proprietes = _plateau->GetJoueurActuel()->GetProprietes();
    for (i = 0; i < proprietes.size(); i++)
    {
        if (proprietes[i]->PeutConstruire())
        {
            Domaine* domaine = (Domaine*) proprietes[i];
            if (domaine->GetNombreMaisons() == 5)
                nbHotels++;
            else if (domaine->GetNombreMaisons() > 0)
                nbMaisons++;
        }
    }
    return ((nbMaisons * _sommeMaisons)+(nbHotels * _sommeHotels));
}

std::string PayerConstructions::GetMessage()
{
    return _libelle;
}

ACTION PayerConstructions::DoitPayer(Joueur *joueur)
{
    if (SommeAPayer() > 0)
        return DOITPAYER;
    else
        return RIEN;
}
