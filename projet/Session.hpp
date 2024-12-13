#ifndef SESSION
#define SESSION


#include <iostream>
#include <vector>
#include "Movie.hpp"
#include "Cinema.hpp"
#include "Ticket.hpp"

using namespace std;

class Session
{
private:
	string m_date;
	string m_heure;
	int m_nb_places;

public:

	//Constructeurs
	Session(string d, string h, int p);

	//getter
	string get_date() const;
	string get_heure() const;
	int get_nb_places() const;

};

#endif