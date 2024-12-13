#ifndef CINEMA
#define CINEMA

#include <iostream>
#include <vector>

using namespace std;

class Cinema
{
private:
	string m_titre;
	string m_auteur;

public:

	//Constructeurs
	Cinema(string t, string a);

	//getter
	string get_titre() const;
	string get_auteur() const;

};

#endif