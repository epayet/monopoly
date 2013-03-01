#include "Plateau.h"
#include "Participant/Joueur.h"
#include "Participant/Cagnotte.h"
#include "Case/Case.h"
#include "Case/Propriété/Propriete.h"
#include "Case/Propriété/Domaine.h"
#include "Case/Propriété/Gare.h"
#include "Case/Taxe.h"
#include "Case/CaseCarte.h"
#include "Case/Carte/Carte.h"
#include "Case/Prison.h"
#include "../lib/rapidxml-1.13/rapidxml.hpp"
#include "../util.h"
#include "Case/Carte/Payer.h"
#include "Case/Carte/Deplacement.h"
#include "Case/Carte/EstPayeParBanque.h"
#include "Case/Carte/Anniversaire.h"
#include "Case/Carte/SortirPrison.h"
#include "Case/Carte/AllerPrison.h"
#include "Case/Carte/PayerConstructions.h"
#include "Case/Depart.h"
#include "Case/Parc.h"
#include "Case/Arrestation.h"
#include "Case/Propriété/ServicePublique.h"
#include "plateauUtil.h"
#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>

using namespace std;
using namespace rapidxml;

Plateau::Plateau()
{
    _tour = 0;
    _cagnotte = new Cagnotte(this);
    
    //Remplit le vecteur
    generate_n(back_inserter(_cases), NBCASES, &make_case);

    LireDonnees();
}

Plateau::~Plateau()
{
    for (int i = 0; i < _joueurs.size(); i++)
        delete _joueurs[i];

    for (int i = 0; i < _cases.size(); i++)
        delete _cases[i];

    delete _cagnotte;
    
    //Delete cartes chance/Communaute
}

void Plateau::AjouterJoueur(std::string nomJoueur)
{
    Joueur* joueur = new Joueur(this, nomJoueur);
    joueur->InitialiserBillets();
    _joueurs.push_back(joueur);
    Prison* prison = (Prison*)_cases[10];
    prison->AjouterJoueur(joueur);
    
    joueur->Placer(_cases[29]);
}

Joueur* Plateau::GetJoueurActuel()
{
    return _joueurs[_tour];
    //    return new Joueur("fake Joueur");
}

void Plateau::FinirTour()
{
    _tour++;

    if (_tour == _joueurs.size())
        _tour = 0;

    if (GetJoueurActuel()->APerdu())
        FinirTour();
}

std::vector<Joueur*> Plateau::GetJoueurs()
{
    return _joueurs;
}

Cagnotte* Plateau::GetCagnotte()
{
    return _cagnotte;
}

Case* Plateau::GetCase(int numero)
{
    return _cases[numero];
}

void Plateau::JoueurActuelAPerdu()
{
    GetJoueurActuel()->Perdre();
}

bool Plateau::EstFini()
{
    int nbJoueursRestants = 0;
    for (int i = 0; i < _joueurs.size(); i++)
    {
        if (!_joueurs[i]->APerdu())
            nbJoueursRestants++;
    }

    return nbJoueursRestants == 1;
}

Carte* Plateau::TirerCarte(TYPECARTE typeCarte, bool remettreSousLeTas)
{
    Carte* carteTiree;
    if (typeCarte == CHANCE)
        carteTiree = tirer_carte(_cartesChance, remettreSousLeTas);
    else
        carteTiree = tirer_carte(_cartesCommunaute, remettreSousLeTas);
    
    return carteTiree;
}

std::queue<Carte*> Plateau::GetPaquetCartes(TYPECARTE typeCarte)
{
    if (typeCarte == CHANCE)
        return _cartesChance;
    else
        return _cartesCommunaute;
}

void Plateau::LireDonnees()
{
    string input_xml = get_file_contents("config.xml");
    vector<char> xml_copy(input_xml.begin(), input_xml.end());
    xml_copy.push_back('\0');
    //copie du xml
    xml_document<> doc;
    doc.parse < parse_declaration_node | parse_no_data_nodes > (&xml_copy[0]);

    xml_node<char> *cur_node = doc.first_node()->first_node();

    //Cartes
    xml_node<char>* type_node = cur_node->first_node();
    //    cout << type_node->name() << endl;
    while (type_node)
    {
        xml_node<char>* action_node = type_node->first_node();
        string typeCarte = type_node->first_attribute("type")->value();

        TYPECARTE typeCarteEnum;
        if (typeCarte == "Communaute")
            typeCarteEnum = COMMUNAUTE;
        else
            typeCarteEnum = CHANCE;

        while (action_node)
        {
            string typeAction = action_node->first_attribute("action")->value();

            xml_node<char>* carte_node = action_node->first_node();
            while (carte_node)
            {
                //                        cout << carte_node->first_attribute("libelle")->value() << endl;
                string libelle = carte_node->first_attribute("libelle")->value();

                Carte* carte;
                if (typeAction == "paye")
                {
                    int somme = stringToInt(carte_node->first_attribute("somme")->value());
                    carte = new Payer(this, libelle, typeCarteEnum, somme);
                }
                else if (typeAction == "deplacement")
                {
                    int numCase = stringToInt(carte_node->first_attribute("numCase")->value());
                    bool depart = stringToInt(carte_node->first_attribute("depart")->value());
                    carte = new Deplacement(this, libelle, typeCarteEnum, numCase, depart);
                }
                else if (typeAction == "estPayeBanque")
                {
                    int somme = stringToInt(carte_node->first_attribute("somme")->value());
                    carte = new EstPayeParBanque(this, libelle, typeCarteEnum, somme);
                }
                else if (typeAction == "anniversaire")
                {
                    int somme = stringToInt(carte_node->first_attribute("somme")->value());
                    carte = new Anniversaire(this, libelle, typeCarteEnum, somme);
                }
                else if (typeAction == "sortirPrison")
                {
                    carte = new SortirPrison(this, libelle, typeCarteEnum);
                }
                else if (typeAction == "allerPrison")
                    carte = new AllerPrison(this, libelle, typeCarteEnum);

                else if (typeAction == "payeConstructions")
                {
                    int prixMaison = stringToInt(carte_node->first_attribute("prixMaison")->value());
                    int prixHotel = stringToInt(carte_node->first_attribute("prixHotel")->value());
                    carte = new PayerConstructions(this, libelle, typeCarteEnum, prixMaison, prixHotel);
                }

                if (typeCarteEnum == COMMUNAUTE)
                    _cartesCommunaute.push(carte);
                else
                    _cartesChance.push(carte);

                carte_node = carte_node->next_sibling("Carte");
            }

            action_node = action_node->next_sibling("Action");
        }

        type_node = type_node->next_sibling("Type");
    }

    //Cases
    xml_node<char>* cases_node = cur_node->next_sibling("Cases");
    xml_node<char>* case_node = cases_node->first_node();
    while (case_node)
    {
        string type = case_node->first_attribute("type")->value();
        string libelle = case_node->first_attribute("libelle")->value();
        int numCase = stringToInt(case_node->first_attribute("numCase")->value());

        Case* caseP;

        if (type == "depart")
        {
            int somme = stringToInt(case_node->first_attribute("somme")->value());
            caseP = new Depart(this, numCase, libelle, somme);
        }
        else if (type == "chance")
            caseP = new CaseCarte(this, numCase, libelle, CHANCE);
        else if (type == "caisseCommunaute")
            caseP = new CaseCarte(this, numCase, libelle, COMMUNAUTE);
        else if (type == "parc")
            caseP = new Parc(this, numCase, libelle);
        else if (type == "arrestation")
            caseP = new Arrestation(this, numCase, libelle);
        else if (type == "prison")
        {
            int prixSortie = stringToInt(case_node->first_attribute("prixSortie")->value());
            caseP = new Prison(this, numCase, libelle, prixSortie);
        }
        else if (type == "taxe")
        {
            int somme = stringToInt(case_node->first_attribute("somme")->value());
            caseP = new Taxe(this, numCase, libelle, somme);
        }

        _cases[caseP->GetNumero()] = caseP;
        case_node = case_node->next_sibling("Case");
    }

    //Proprietes
    xml_node<char>* proprietes = cur_node->next_sibling("Proprietes");
    xml_node<char>* typePropriete = proprietes->first_node();
    while (typePropriete)
    {
        xml_node<char>* famille_node = typePropriete->first_node();
        while (famille_node)
        {
            string typeProprieteString = typePropriete->first_attribute("type")->value();
            xml_node<char>* case_node = famille_node->first_node();

            string couleur = famille_node->first_attribute("couleur")->value();

            int prixMaisons = 0;            
            if (typeProprieteString == "domaine")
                prixMaisons = stringToInt(famille_node->first_attribute("prixMaisons")->value());

            Famille* famille = new Famille(couleur, prixMaisons);

            //attribut famille
            while (case_node)
            {
                Case* caseP;

                string nom = case_node->first_attribute("nom")->value();
                int numCase = stringToInt(case_node->first_attribute("numCase")->value());
                int achat = stringToInt(case_node->first_attribute("achat")->value());
                int hypotheque = stringToInt(case_node->first_attribute("hypotheque")->value());
                vector<int> prixLoyer;

                if (typeProprieteString == "domaine")
                {
                    for (int i = 0; i <= 5; i++)
                    {
                        string pX = "p" + intToString(i);
                        prixLoyer.push_back(stringToInt(case_node->first_attribute(pX.c_str())->value()));
                    }

                    caseP = new Domaine(this, numCase, nom, hypotheque, achat, prixLoyer, famille);

                    case_node = case_node->next_sibling("Domaine");
                }
                else if (typeProprieteString == "dungeon")
                {
                    for (int i = 0; i <= 3; i++)
                    {
                        string pX = "p" + intToString(i);
                        prixLoyer.push_back(stringToInt(case_node->first_attribute(pX.c_str())->value()));
                    }

                    caseP = new Gare(this, numCase, nom, hypotheque, achat, prixLoyer, famille);

                    case_node = case_node->next_sibling("Gare");
                }
                else if (typeProprieteString == "services")
                {
                    for (int i = 0; i <= 1; i++)
                    {
                        string pX = "p" + intToString(i);
                        prixLoyer.push_back(stringToInt(case_node->first_attribute(pX.c_str())->value()));
                    }

                    caseP = new ServicePublique(this, numCase, nom, hypotheque, achat, prixLoyer, famille);

                    case_node = case_node->next_sibling("Service");
                }

                Propriete* propriete = (Propriete*) caseP;
                famille->AjouterPropriete(propriete);
                _cases[caseP->GetNumero()] = caseP;
            }
            famille_node = famille_node->next_sibling("Famille");
        }

        typePropriete = typePropriete->next_sibling("TypeProprietes");
    }
}