#include "JeuConstantes.h"

//Keys
const std::string JeuConstantes::BoutonCommencerKey = "Commencer";
const std::string JeuConstantes::BoutonJouerKey = "Jouer";
const std::string JeuConstantes::BoutonQuitterKey = "Quitter";
const std::string JeuConstantes::SpinnerChoixNbJoueursKey = "SpinnerChoixNbJoueur";
const std::string JeuConstantes::TextBlockChoixNbJoueursKey = "Nombre de joueurs :";
const std::string JeuConstantes::ActionsPossiblesPourKey = "Actions possibles pour ";
const std::string JeuConstantes::LancerLesDesKey = "Lancer les des";
const std::string JeuConstantes::De1Key = "De1";
const std::string JeuConstantes::De2Key = "De2";
const std::string JeuConstantes::SommeCagnotteKey = "Cagnotte : ";
const std::string JeuConstantes::CaseMessageKey = "CaseMessage";
const std::string JeuConstantes::SommeAPayerKey = "Somme a payer : ";
const std::string JeuConstantes::ResetBilletsKey = "ResetBillets";
const std::string JeuConstantes::ValiderBilletsKey = "ValiderBillets";
const std::string JeuConstantes::VoulezVousPayerKey = "Voulez-vous payer ?";
const std::string JeuConstantes::OuiPayerKey = "OuiPayer";
const std::string JeuConstantes::NonPayerKey = "NonPayer";
const std::string JeuConstantes::FaireMonnaieKey = "Faire Monnaie";
const std::string JeuConstantes::ConstruireKey = "Constuire";
const std::string JeuConstantes::FinirTourKey = "Finir tour";
const std::string JeuConstantes::AppartenanceKey = "Appartenance";
const std::string JeuConstantes::HypothequerKey = "Hypothequer";
const std::string JeuConstantes::LeverHypothequeKey = "Lever Hypotheque";

const std::string JeuConstantes::BilletsKeys[JeuConstantes::NbBillets] = {"Billet1", "Billet5", "Billet10", "Billet20", "Billet50", "Billet100", "Billet500"};
const std::string JeuConstantes::NbBilletsKeys[JeuConstantes::NbBillets] = {"NbBillets1", "NbBillets5", "NbBillets10", "NbBillets20", "NbBillets50", "NbBillets100", "NbBillets500"};

//Paths
const std::string JeuConstantes::PlateauPath = "./assets/Images/plateau.jpg";
const std::string JeuConstantes::DesPaths[6] = {"./assets/Images/de1.png", "./assets/Images/de2.png",
                                "./assets/Images/de3.png","./assets/Images/de4.png", "./assets/Images/de5.png", "./assets/Images/de6.png"};
const std::string JeuConstantes::BilletsPaths[JeuConstantes::NbBillets] = {"./assets/Images/billet1.jpg", "./assets/Images/billet5.jpg",
                                "./assets/Images/billet10.jpg", "./assets/Images/billet20.jpg",
                                "./assets/Images/billet50.jpg", "./assets/Images/billet100.jpg", "./assets/Images/billet500.jpg"};

const TYPEBILLET JeuConstantes::ValeurBillets[JeuConstantes::NbBillets] = {BILLET1, BILLET5, BILLET10, BILLET20, BILLET50, BILLET100, BILLET500};
