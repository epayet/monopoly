/* 
 * File:   JeuConstantes.h
 * Author: manu
 *
 * Created on 22 février 2013, 14:57
 */

#ifndef JEUCONSTANTES_H
#define	JEUCONSTANTES_H

#include <string>

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

    //Paths
	static const std::string PlateauPath;
    static const std::string DesPaths[6];
    static const std::string BilletsPaths[NbBillets];
};

#endif	/* JEUCONSTANTES_H */

