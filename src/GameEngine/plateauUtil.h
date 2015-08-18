/* 
 * File:   plateauUtil.h
 * Author: manu
 *
 * Created on 1 mars 2013, 21:10
 */

#ifndef PLATEAUUTIL_H
#define	PLATEAUUTIL_H

#include <queue>

class Case;
class Carte;

Case* make_case();
Carte* tirer_carte(std::queue<Carte*> &cartes, bool remettreSousLeTas);

#endif	/* PLATEAUUTIL_H */

