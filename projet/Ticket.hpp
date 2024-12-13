#ifndef TICKET
#define TICKET

#include <iostream>
#include <vector>

using namespace std;

class Ticket
{
private:
	string m_film;
	string m_seance;
	int m_nb_places;
	float m_prix;

public:

	//Constructeurs
	Ticket(string f, string s, int nb, int p);

	//getter
	string get_film() const;
	string get_seance() const;
	int get_nb_places() const;
	float get_prix() const;

};

#endif