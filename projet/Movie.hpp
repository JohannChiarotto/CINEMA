#ifndef MOVIE
#define MOVIE

#include <iostream>
#include <vector>
#include "Cinema.hpp"
#include "Ticket.hpp"
#include "Session.hpp"


using namespace std;

class Movie
{
private:
	string m_titre;
	int m_duree;
	//vector <Session> liste();

public:

	//Constructeurs
	Movie(string t, int d);

	//getter
	string get_titre() const;
	int get_duree() const;
//	vector <Session> get_liste() const;

};

#endif