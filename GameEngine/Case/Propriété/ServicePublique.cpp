#include "ServicePublique.h"
#include "GameEngine/Plateau.h"

void ServicePublique::Agir(Joueur *joueur)
{

}

ACTION ServicePublique::DoitPayer(Joueur* joueur)
{
    
}

int ServicePublique::SommeAPayer()
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
        if(nbPossedes<2)
            return _prixLoyer[0] * _plateau->GetJoueurActuel()->GetDerniersDes();
        else
            return _prixLoyer[1] * _plateau->GetJoueurActuel()->GetDerniersDes();
    }
}

std::string ServicePublique::GetMessage()
{
    if (_proprietaire != _plateau->GetJoueurActuel())
        return "Vous êtes chez " + _proprietaire->GetNom() + ", vous lui devez : " + intToString(SommeAPayer()) + " €.";
}
