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

using namespace std;
using namespace rapidxml;

Plateau::Plateau()
{
    _tour = 0;
    _cagnotte = new Cagnotte(this);
    
    LireDonnees();
}

Plateau::~Plateau()
{
    for(int i=0; i<_joueurs.size(); i++)
        delete _joueurs[i];
    
    for(int i=0; i<_cases.size(); i++)
        delete _cases[i];
    
    delete _cagnotte;
}

void Plateau::AjouterJoueur(std::string nomJoueur)
{
    Joueur* joueur = new Joueur(this, nomJoueur);
    joueur->InitialiserBillets();
    _joueurs.push_back(joueur);
}

Joueur* Plateau::GetJoueurActuel()
{
    return _joueurs[_tour];
//    return new Joueur("fake Joueur");
}

void Plateau::FinirTour()
{
    _tour++;
    
    if(_tour == _joueurs.size())
        _tour = 0;
    
    if(GetJoueurActuel()->APerdu())
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
    for(int i=0; i<_joueurs.size(); i++)
    {
        if(!_joueurs[i]->APerdu())
            nbJoueursRestants++;
    }
    
    return nbJoueursRestants == 1;
}

Carte* Plateau::GetCarte(TYPECARTE typeCarte)
{
    if(typeCarte==CHANCE)
        return _cartesChance.front();
    else
        return _cartesCommunaute.front();
}

std::queue<Carte*> Plateau::GetPaquetCartes(TYPECARTE typeCarte)
{
    if(typeCarte==CHANCE)
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
        string typeAction = action_node->first_attribute("action")->value();
       
            while (action_node)
            {
//                 if (typeAction == "Communaute")
        
                xml_node<char>* carte_node = action_node->first_node();
                    while (carte_node)
                    {
//                        cout << carte_node->first_attribute("libelle")->value() << endl;
                        //attribut
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
        cout << case_node->first_attribute("type")->value() << endl;
        //attribut
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
                //attribut famille
                while (case_node)
                {
//                    if (typeProprieteString == "domaine")
                    cout << case_node->first_attribute("nom")->value() << endl;
                    //recuperation attribut
                    case_node = case_node->next_sibling("Domaine");
                }
            famille_node = famille_node->next_sibling("Famille");
        }
        
        typePropriete = typePropriete->next_sibling("TypeProprietes");
    }
}