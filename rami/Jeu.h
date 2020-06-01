#pragma once
#include <vector>
#include "Joueur.h"
#include "Plateau.h"
#include <stdlib.h>
#include "odrive.h"

class Jeu
{
	string nom_ = "Partie";
	int nbJoueurs_ = 0;
	int numJoueur_ = 0;
	vector<Joueur>joueurs_;
	Plateau	plateau_;
	Pioche pioche_;
	int tour_ = 1;
	ODrive od;
public:

	Jeu();
	void afficherBootScreen(); // affiche un dessin au lancement.
	void menuTour(); // affiche les possibilit� du joeur � chaque tour.
	void demarrerPartie(); // Permet de chosiir entre cr�er et rejoindre une partie.
	void creerPartie(); // Permet de cr�er une nouvelle partie.
	void rejoindrePartie(); // Permet de rejoindre une partie d�j� cr��e.
	void nouveauJoueur(string nom, string id); // Ajoute un nouveau joueur avec un nom et un id.
	void afficherTour(); // Affiche le score, le nombre de carte et le nom de joueurs ainsi que les cartes du joueur et la premi�re carte de la d�fausse et les combinaisons.
	void effectuerTour(); // permet d'effectuer un tour complet (poser, modifier des combinaisons)
	void poseCombinaison(); // Permet de poser une combianaison sur le plateau en demandant les cartes � mettre.
	void changeCombinaison(); // Permet de modidifier une combinaisons d�j� pos�e en demandant les changement � faire.
	void afficherRegles(); // Affiche les r�gles (au lancement du jeu)
	void sauverJeu(); // Sauvegarde la pioche, le plateau, les joueurs dans un fichier texte.
	void chargerJeu(); // Charge le plateau, la p�oche, les joueurs � partir du fichier texte.
	void abandonner(); // Permet d'abandonner en modifiant le fichier de sauvegarde.
	void exec(); // Contient tous le d�roulement d'une partie � parir des fonctions pr�c�dentes.
	~Jeu(); // Destructeur de Jeu, supprime les fichier de sauvegarde.
};
