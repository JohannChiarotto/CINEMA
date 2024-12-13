#ifndef SESSION
#define SESSION

#include <iostream>
#include <vector>

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
	string get_titre() const;
	string get_auteur() const;

};

#endif