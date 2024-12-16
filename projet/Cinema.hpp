#ifndef CINEMA
#define CINEMA

#include <iostream>
#include <vector>
#include "Movie.hpp"
#include "Ticket.hpp"

using namespace std;

class Cinema
{
private:
	Ticket m_reservation;
	Movie m_details;

public:

	//Constructeurs
	Cinema(); //par defaut
	Cinema(const Movie& details, const Ticket& reservation);
	//getter

};

#endif