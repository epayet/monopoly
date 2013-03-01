/* 
 * File:   JeuConstantes.h
 * Author: manu
 *
 * Created on 22 février 2013, 14:57
 */

#ifndef JEUCONSTANTES_H
#define	JEUCONSTANTES_H

#include <string>
#include "../GameEngine/Billet/BilletManager.h"

class JeuConstantes
{
public:
    //Ints
    static const int NbBillets = 7;
    static const int TailleBillet = 150;
    static const int HauteurBillet = 78;
    static const int TailleCase = 62;
    static const int HauteurCase = 104;
    
    //GuiItems Keys
	static const std::string BoutonJouerKey;
	static const std::string BoutonQuitterKey;
	static const std::string SpinnerChoixNbJoueursKey;
	static const std::string TextBlockChoixNbJoueursKey;
	static const std::string BoutonCommencerKey;
    static const std::string ActionsPossiblesPourKey;
    static const std::string LancerLesDesKey;
    static const std::string De1Key;
    static const std::string De2Key;
    static const std::string BilletsKeys[NbBillets];
    static const std::string NbBilletsKeys[NbBillets];
    static const std::string SommeCagnotteKey;
    static const std::string CaseMessageKey;
    static const std::string SommeAPayerKey;
    static const std::string ResetBilletsKey;
    static const std::string ValiderBilletsKey;
    static const std::string VoulezVousPayerKey;
    static const std::string OuiPayerKey;
    static const std::string NonPayerKey;
    static const std::string FaireMonnaieKey;
    static const std::string ConstruireKey;
    static const std::string FinirTourKey;
    static const std::string AppartenanceKey;
    static const std::string HypothequerKey;

    //Paths
	static const std::string PlateauPath;
    static const std::string DesPaths[6];
    static const std::string BilletsPaths[NbBillets];
    
    static const TYPEBILLET ValeurBillets[NbBillets];
};

#endif	/* JEUCONSTANTES_H */

