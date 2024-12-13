#ifndef CINEMA
#define CINEMA

#include <iostream>
#include <vector>
#include "Movie.hpp"
#include "Ticket.hpp"
#include "Session.hpp"

using namespace std;

class Cinema
{
private:
	Movie m_details;
	Ticket m_reservation;

public:

	//Constructeurs
	Cinema() : m_details(Movie()), m_reservation(Ticket()){} //par defaut
	Cinema(const Movie& details, const Ticket& reservation);
	//getter

};

#endif