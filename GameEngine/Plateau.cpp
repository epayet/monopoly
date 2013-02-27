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
    TiXmlElement* elem = handle.FirstChildElement().Element();
    while(elem){
        if(elem->FirstChildElement()=="Proprietes"){
            vector<Propriete*> proprietes;
            while(elem->FirstChildElement()->FirstChildElement()->FirstChildElement()){
                int i = 1;
                if(elem->FirstChildElement()->FirstChildElement()->FirstChildElement()=="Domaine"){
                     vector<int> prixLoyer;
                     for(int j=0; j<6; j++){
                         prixLoyer.push_back(elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("p" + intToString(j)));
                     }
                               
                    _cases.push_back(new Propriete(
                        this,
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("numCase"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("nom"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("hypotheque"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("achat"), 
                        prixLoyer));
                    
                    proprietes.push_back(new Propriete(
                        this,
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("numCase"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("nom"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("hypotheque"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("achat"), 
                        prixLoyer));
                }
                else if(elem->FirstChildElement()->FirstChildElement()->FirstChildElement()=="dungeon"){
                    vector<int> prixLoyer;
                     for(int j=0; j<3; j++){
                         prixLoyer->push_back(elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("p"+j));
                     }
                               
                    _cases.push_back(new Propriete(
                        this,
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("numCase"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("nom"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("hypotheque"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("achat"), 
                        prixLoyer));
                    
                    proprietes.push_back(new Propriete(
                        this,
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("numCase"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("nom"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("hypotheque"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("achat"), 
                        prixLoyer));
                }
                else{
                    vector<int> prixLoyer;
                     for(int j=0; j<2; j++){
                         prixLoyer->push_back(elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("p"+j));
                     }
                               
                    _cases.push_back(new Propriete(
                        this,
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("numCase"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("nom"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("hypotheque"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("achat"), 
                        prixLoyer));
                    
                    proprietes.push_back(new Propriete(
                        this,
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("numCase"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("nom"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("hypotheque"), 
                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("achat"), 
                        prixLoyer));
                }
                i++;
                elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->NextSibling();
            }
            Famille* famille = new Famille(
                 elem->FirstChildElement()->FirstChildElement()->Attribute("couleur"), 
                 proprietes, 
                 elem->FirstChildElement()->FirstChildElement()->Attribute("prixMaisons"));              
            //need explications sur vector propriétés dans famille!
        }
        else if(elem->FirstChildElement()=="Cartes"){
            
        }
        else{
//            _cases.push_back(new Case(
//                        this,
//                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("numCase"), 
//                        elem->FirstChildElement()->FirstChildElement()->FirstChildElement()->Attribute("type")); 
        }
    }
}