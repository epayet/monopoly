#include "Plateau.h"
#include "Participant/Joueur.h"
#include "Participant/Cagnotte.h"
#include "Case/Case.h"
#include "Case/Propriété/Propriete.h"
#include "lib/tinyxml.h"
#include "util.h"

using namespace std;

Plateau::Plateau()
{
    _tour = 0;
    _cagnotte = new Cagnotte;
    
    for(int i=0; i<NBCASES; i++)
    {
        //Fakes cases
        std::vector<int> prix;
        prix.push_back(0);
        prix.push_back(1);
        prix.push_back(2);
        prix.push_back(3);
        prix.push_back(4);
        prix.push_back(5);
        _cases.push_back(new Propriete(this, i, "fake case", 10, 10, prix));
    }
}

Plateau::~Plateau()
{
    for(int i=0; i<_joueurs.size(); i++)
        delete _joueurs[i];
    
    for(int i=0; i<_cases.size(); i++)
        delete _cases[i];
    
    delete _cagnotte;
}

void Plateau::AddJoueur(std::string nomJoueur)
{
    Joueur* joueur = new Joueur(nomJoueur);
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

void Plateau::LireXml(){
    TiXmlDocument doc("config.xml");
    doc.LoadFile();    
    TiXmlHandle handle(&doc);    
    TiXmlElement* propriete = handle.FirstChildElement().Element();
    TiXmlElement* famille = handle.FirstChildElement().FirstChildElement().Element();
    TiXmlElement* domaine = handle.FirstChildElement().FirstChildElement().FirstChildElement().Element();
    
    while(propriete){
        if(handle.FirstChildElement("Proprietes").Element()){
            vector<Propriete*> proprietes;
            while(handle.FirstChildElement("Proprietes").Element()){
                int i = 1;
                if(handle.FirstChildElement().FirstChildElement().FirstChildElement("Domaine").Element()){
                     vector<int> prixLoyer;
                     for(int j=0; j<6; j++){
                         prixLoyer.push_back(domaine->Attribute("p" + intToString(j)));
                     }
                               
                    _cases.push_back(new Propriete(
                        this,
                        domaine->Attribute("numCase"), 
                        domaine->Attribute("nom"), 
                        domaine->Attribute("hypotheque"), 
                        domaine->Attribute("achat"), 
                        prixLoyer));
                    
                    proprietes.push_back(new Propriete(
                        this,
                        domaine->Attribute("numCase"), 
                        domaine->Attribute("nom"), 
                        domaine->Attribute("hypotheque"), 
                        domaine->Attribute("achat"), 
                        prixLoyer));
                    
                }
                else if(propriete->Attribute("type")=="dungeon"){
                     vector<int> prixLoyer;
                     for(int j=0; j<3; j++){
                         prixLoyer.push_back(domaine->Attribute("p" + intToString(j)));
                     }
                               
                    _cases.push_back(new Propriete(
                        this,
                        domaine->Attribute("numCase"), 
                        domaine->Attribute("nom"), 
                        domaine->Attribute("hypotheque"), 
                        domaine->Attribute("achat"), 
                        prixLoyer));
                    
                    proprietes.push_back(new Propriete(
                        this,
                        domaine->Attribute("numCase"), 
                        domaine->Attribute("nom"), 
                        domaine->Attribute("hypotheque"), 
                        domaine->Attribute("achat"), 
                        prixLoyer));
                }
                else{
                    vector<int> prixLoyer;
                     for(int j=0; j<2; j++){
                         prixLoyer.push_back(domaine->Attribute("p" + intToString(j)));
                     }
                               
                    _cases.push_back(new Propriete(
                        this,
                        domaine->Attribute("nom"), 
                        domaine->Attribute("hypotheque"), 
                        domaine->Attribute("achat"), 
                        prixLoyer));
                    
                    proprietes.push_back(new Propriete(
                        this,
                        domaine->Attribute("numCase"), 
                        domaine->Attribute("nom"), 
                        domaine->Attribute("hypotheque"), 
                        domaine->Attribute("achat"), 
                        prixLoyer));
                }
                i++;
                domaine->NextSiblingElement();
            }
            Famille* fam = new Famille(
                 propriete->FirstChildElement()->Attribute("couleur"), 
                 proprietes, 
                 propriete->FirstChildElement()->Attribute("prixMaisons"));
        }
        else if(handle.FirstChildElement("Cartes")){
            
        }
        else{
            _cases.push_back(new Taxe(
                        this,
                        domaine->Attribute("numCase"), 
                        domaine->Attribute("type"),
                        domaine->Attribute("somme"))); 
        }
    }
}