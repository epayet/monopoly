#include "Gare.h"
#include "GameEngine/Plateau.h"
#include "util.h"

Gare::Gare(Plateau* plateau, int numero, std::string libelle, int valeurHypotheque, int prixAchat, std::vector<int> prixLoyer, Famille* famille) : Propriete(plateau, numero, libelle, valeurHypotheque, prixAchat, prixLoyer, famille)
{

}

int Gare::SommeAPayer()
{
    if (DoitPayer(_plateau->GetJoueurActuel()) == PEUTPAYER)
        return _prixAchat;
    else if (DoitPayer(_plateau->GetJoueurActuel()) == DOITPAYER)
    {
        int i, nbPossedes = 0;
        for (i = 0; i <= _famille->GetProprietes().size(); i++)
        {
            if (_famille->GetProprietes()[i]->GetProprietaire() == _proprietaire)
                nbPossedes++;
        }
        return _prixLoyer[nbPossedes];
    }
}

std::string Gare::GetMessage()
{
    if(_proprietaire!=_plateau->GetJoueurActuel())
    {
        if (_proprietaire != _plateau->GetJoueurActuel())
        return "Vous êtes chez " + _proprietaire->GetNom() + ", vous lui devez : " + intToString(SommeAPayer()) + " euros.";
    }
}
