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
	Cinema(Movie d, Ticket r);

	//getter

};

#endif