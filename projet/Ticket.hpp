#ifndef TICKET
#define TICKET

#include <iostream>
#include <vector>
#include "Session.hpp"

using namespace std;

class Ticket
{
private:
	string m_film;
	Session m_seance;
	int m_nb_places;
	float m_prix;

public:

	//Constructeurs
	Ticket() : m_film(""), m_seance(Session()), m_nb_places(0), m_prix(0.0f) {} //par defaut
	Ticket(string f, string s, int nb, float p);

	//getter
	string get_film() const;
	int get_nb_places() const;
	float get_prix() const;

};

#endif