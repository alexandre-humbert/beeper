#include "Pioche.h"
#include <stdio.h>
#include <stdlib.h>
#include <algorithm> 

Pioche::Pioche()
{
	 cartes_.push_back(Carte("1", "Ca")); 
	 cartes_.push_back(Carte("2", "Ca"));
	 cartes_.push_back(Carte("3", "Ca"));
	 cartes_.push_back(Carte("4", "Ca"));
	 cartes_.push_back(Carte("5", "Ca"));
	 cartes_.push_back(Carte("6", "Ca"));
	 cartes_.push_back(Carte("7", "Ca"));
	 cartes_.push_back(Carte("8", "Ca"));
	 cartes_.push_back(Carte("9", "Ca"));
	 cartes_.push_back(Carte("10", "Ca"));
	 cartes_.push_back(Carte("11", "Ca"));
	 cartes_.push_back(Carte("12", "Ca"));
	 cartes_.push_back(Carte("13", "Ca"));
	 cartes_.push_back(Carte("1", "Co"));
	 cartes_.push_back(Carte("2", "Co"));
	 cartes_.push_back(Carte("3", "Co"));
	 cartes_.push_back(Carte("4", "Co"));
	 cartes_.push_back(Carte("5", "Co"));
	 cartes_.push_back(Carte("6", "Co"));
	 cartes_.push_back(Carte("7", "Co"));
	 cartes_.push_back(Carte("8", "Co"));
	 cartes_.push_back(Carte("9", "Co"));
	 cartes_.push_back(Carte("10", "Co"));
	 cartes_.push_back(Carte("11", "Co"));
	 cartes_.push_back(Carte("12", "Co"));
	 cartes_.push_back(Carte("13", "Co"));
	 cartes_.push_back(Carte("1", "P"));
	 cartes_.push_back(Carte("2", "P"));
	 cartes_.push_back(Carte("3", "P"));
	 cartes_.push_back(Carte("4", "P"));
	 cartes_.push_back(Carte("5", "P"));
	 cartes_.push_back(Carte("6", "P"));
	 cartes_.push_back(Carte("7", "P"));
	 cartes_.push_back(Carte("8", "P"));
	 cartes_.push_back(Carte("9", "P"));
	 cartes_.push_back(Carte("10", "P"));
	 cartes_.push_back(Carte("11", "P"));
	 cartes_.push_back(Carte("12", "P"));
	 cartes_.push_back(Carte("13", "P"));
	 cartes_.push_back(Carte("1", "T"));
	 cartes_.push_back(Carte("2", "T"));
	 cartes_.push_back(Carte("3", "T"));
	 cartes_.push_back(Carte("4", "T"));
	 cartes_.push_back(Carte("5", "T"));
	 cartes_.push_back(Carte("6", "T"));
	 cartes_.push_back(Carte("7", "T"));
	 cartes_.push_back(Carte("8", "T"));
	 cartes_.push_back(Carte("9", "T"));
	 cartes_.push_back(Carte("10", "T"));
	 cartes_.push_back(Carte("11", "T"));
	 cartes_.push_back(Carte("12", "T"));
	 cartes_.push_back(Carte("13", "T"));
	 cartes_.push_back(Carte("x", "x"));
	 taillePioche_ = 53;
}

int Pioche::getTaillePioche()
{
	return taillePioche_;
}

int Pioche::getTailleDefausse()
{
	return tailleDefausse_;
}

void Pioche::renouvelerPioche() {
	cartes_ = defausse_;
	taillePioche_ = tailleDefausse_;
	defausse_.clear();
	tailleDefausse_ = 0;
	melanger();
}

void Pioche::melanger(){
	random_shuffle(cartes_.begin(), cartes_.end());
}

Carte Pioche::tirerCarte()
{	Carte c;
	c = cartes_.back();
	cartes_.pop_back();
	taillePioche_--;
	return c;
}

void Pioche::afficherDefausse() {
	(defausse_.back()).afficherCarte();
}

void Pioche::defausserCarte(Carte c)
{
	defausse_.push_back(c);
	tailleDefausse_++;
}




Pioche::~Pioche()
{
}