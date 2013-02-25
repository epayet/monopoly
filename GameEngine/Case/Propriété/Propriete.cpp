#include "Propriete.h"
#include "../Case.h"
#include "GameEngine/Participant/Participant.h"
#include "GameEngine/Participant/Joueur.h"

Propriete::Propriete(Plateau *plateau, int numero, std::string libelle, int valeurHypotheque, int prixAchat, std::vector<int> prixLoyer[]) : Case(plateau, numero, libelle)
{
    _proprietaire = NULL;
    _estHypotheque = false;
    _prixAchat = prixAchat;
    _valeurHypotheque = valeurHypotheque;
    int i = 0;
    for(i=0; i<=prixLoyer->size();i++)
    {
        prixLoyer[i] = prixLoyer[i];
    }
}

void Propriete::Hypothequer()
{
    _estHypotheque = true;
    BilletManager *hypotheque = new BilletManager(_valeurHypotheque);
    _proprietaire->Crediter(hypotheque);
    
}

void Propriete::Acheter(Joueur *joueur)
{
    _proprietaire = joueur;
    joueur->Payer(_prixAchat);
}

int Propriete::LeverHypotheque()
{
	_estHypotheque = false;
    int levHyp = _valeurHypotheque + _valeurHypotheque*10/100;
    _proprietaire->Payer(levHyp);
}

ACTION Propriete::DoitPayer(Joueur *joueur)
{
    if (_proprietaire==joueur)
        return RIEN;
    else if (_proprietaire==NULL)
        return PEUTACHETER;
    else
    {
        return DOITPAYER;
    }
}

int Propriete::SommeAPayer()
{
   
}

void Propriete::Agir(Joueur* joueur, BilletManager* billetManager)
{
    
}

Joueur* Propriete::GetProprietaire()
{
    return _proprietaire;
}

int Propriete::GetValeurHypotheque()
{
    return _valeurHypotheque;
}