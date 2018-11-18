/********************************************
* Titre: Travail pratique #5 - gestionnaireUtilisateurs.cpp
* Date: 4 novembre 2018
* Auteur: Ryan Hardie
*******************************************/

#include <algorithm>
#include <map>
#include "gestionnaireUtilisateurs.h"
#include "utilisateurPremium.h"
#include "utilisateurRegulier.h"


vector<double> GestionnaireUtilisateurs::getComptes() const
{
	vector<double> vecteurComptes;
	copy(mapUtilisateur.begin(), mapUtilisateur.end(), back_inserter(vecteurComptes));
	return vecteurComptes;
}

bool GestionnaireUtilisateurs::estExistant(Utilisateur * utilisateur) const
{
	bool estExistant = false;
	if (mapUtilisateur.find(utilisateur) != mapUtilisateur.end()) {
		estExistant = true;
	}
	return estExistant;
}

void GestionnaireUtilisateurs::mettreAJourComptes(Utilisateur * payePar, double montant)
{
}

pair<Utilisateur*, double>& GestionnaireUtilisateurs::getMax() const
{	
	auto max = mapUtilisateur.begin();
	for (auto it = mapUtilisateur.begin(); it != mapUtilisateur.end(); ++it)
	{
		if (it->second > max->second)
		{
			max = it;
		}
	}
	pair<Utilisateur*, double> maPaire = make_pair(max->first, max->second);
	return maPaire;

}

pair<Utilisateur*, double>& GestionnaireUtilisateurs::getMin() const
{
	auto min = mapUtilisateur.begin();
	for (auto it = mapUtilisateur.begin(); it != mapUtilisateur.end(); ++it)
	{
		if (it->second < min->second)
		{
			min = it;
		}
	}
	pair<Utilisateur*, double> maPaire = make_pair(min->first, min->second);
	return maPaire;
}

Utilisateur * GestionnaireUtilisateurs::getUtilisateurSuivant(Utilisateur * utilisateur, double montant) const
{
	return nullptr;
}

vector<pair<Utilisateur*, double>> GestionnaireUtilisateurs::getUtilisateursEntre(double borneInf, double borneSup) const
{
	return vector<pair<Utilisateur*, double>>();
}

GestionnaireUtilisateurs & GestionnaireUtilisateurs::setCompte(pair<Utilisateur*, double> p)
{
	// TODO: ins�rer une instruction return ici
}
