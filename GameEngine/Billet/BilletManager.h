/* 
 * File:   BilletManager.h
 * Author: manu
 *
 * Created on 15 février 2013, 11:33
 */

#ifndef BILLETMANAGER_H
#define	BILLETMANAGER_H

#include <vector>

class Billet;

typedef std::pair<int, Billet*> NbBillets;
typedef std::vector<NbBillets> Billets;

typedef enum
{
	BILLET500, BILLET100, BILLET50, BILLET20, BILLET10, BILLET5, BILLET1
} TYPEBILLET;

class BilletManager
{
public:
	BilletManager(int somme = 0);
	~BilletManager();
	Billets GetBillets();
	int SommeBillets();
	void Ajouter(int nb, TYPEBILLET billet);
	void Ajouter(BilletManager *billetManager);
	void Enlever(int nb, TYPEBILLET billet);
    void Enlever(BilletManager* billetManager);
	void Vider();
	void SetSomme(int somme);
	bool PeutPayer(int somme);
    bool VautSomme(int somme);
    int NombreBillets(TYPEBILLET billet);
    Billet* GetBillet(TYPEBILLET);

private:
	Billets _billets;
};

#endif	/* BILLETMANAGER_H */

