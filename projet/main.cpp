#include <iostream>
#include "Cinema.hpp"
#include "Movie.hpp"
#include "Session.hpp"
#include "Ticket.hpp"

using namespace std;

int AfficherMenu() {
	int choix;
	cout << "----------------Bienvenue dans votre Cinema !----------------" << endl;
	cout << "1. Voir la liste des films" << endl;
	cout << "2. Annuler une reservation" << endl;
	cout << "3. Quitter" << endl;
	cout << "Entrez votre choix : ";
	cin >> choix;

	return choix;
}


int main() {
	bool run = true;
	while (run == true)
	{
		int choix;
		choix = AfficherMenu();

		if (choix == 1)
		{
			//programme pour faire une réservation
		}
		else if (choix == 2)
		{
			//programme pour faire un annule
		}
		else if (choix == 3)
		{
			run = false;
		}
		else
		{
			cout << " ";
			cout << "Il y a une erreur dans votre demmande." << endl;
			cout << " ";
		}
	}
}