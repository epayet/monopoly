#include "Gare.h"
#include "GameEngine/Plateau.h"

Gare::Gare(Plateau *plateau, int numero, std::string libelle, int valeurHypotheque, int prixAchat, std::vector<int> prixLoyer) : Propriete(plateau, numero, libelle, valeurHypotheque, prixAchat, prixLoyer)
{

}

void Gare::Agir(Joueur *joueur)
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
            if (_famille->GetProprietes()[i]->GetProprietaire() == _plateau->GetJoueurActuel())
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
        return "Vous êtes chez " + _proprietaire->GetNom() + ", vous lui devez : " + intToString(SommeAPayer()) + " €.";
    }
}
