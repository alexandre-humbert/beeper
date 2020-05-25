#pragma once
#include <vector>
#include "Carte.h"

/**
Cette classe contient � la fois la pioche et la d�fausse.
Les cartes de la pioche sont repr�sent�es par un vecteur de cartes nomm� carte_ 
tandis que celle de la d�fausse sont dans un vecteur de cartes omm� defausse_.
Cette classe contient aussi le nombre de carte de la pioche et de la defausse.
*/
class Pioche
{
	vector<Carte> cartes_;
	int taillePioche_=53;
	vector<Carte>defausse_;
	int tailleDefausse_ = 0;

public:
	Pioche();
	int getTaillePioche();
	int getTailleDefausse();
	vector<Carte> getPioche() { return cartes_; }
	vector<Carte> getDefausse() { return defausse_; }
	void setTaillePioche(int value) { taillePioche_ = value; }
	void setTailleDefausse(int value) { tailleDefausse_ = value; }
	void setPioche(vector<Carte> value) {cartes_=value; }
	void setDefausse(vector<Carte> value) { defausse_=value; }
	void melanger();
	void renouvelerPioche();
	Carte tirerCarte();
	void afficherDefausse();
	void defausserCarte(Carte c);
	~Pioche();
};

