/********************************************
* Titre: Travail pratique #5 - foncteur.h
* Date: 4 novembre 2018
* Auteur: Ryan Hardie
*******************************************/

/*
	Foncteur AjouterDepense

	M�thode :
	Constructeur
	vector<Depense*>& operator()();

	Attribut :
	vector<Depense*> conteneur_;
*/



/*
Foncteur AjouterUtilisateur

M�thode :
Constructeur
map<Utilisateur*, double>& operator()();

Attribut :
map<Utilisateur*, double> conteneur_;
*/



/*
Foncteur FoncteurIntervalle

M�thode :
Constructeur
bool operator()();

Attribut :
double borneInf_, borneSup_;
*/

class FoncteurIntervalle
{
public:
	FoncteurIntervalle(double borneInf, double borneSup): borneInf_(borneInf), borneSup_(borneSup) {};
	bool operator()(double montant) {
		return (montant >= borneInf_ && montant <= borneSup_);
	};
private:
	double borneInf_, borneSup_;
};
