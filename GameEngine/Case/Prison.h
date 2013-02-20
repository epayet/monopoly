/* 
 * File:   Prison.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:42
 */

#ifndef PRISON_H
#define	PRISON_H

#include "Case.h"

class Prison : Case 
{
	public :
		void Agir(Joueur *joueur);
};

#endif	/* PRISON_H */

