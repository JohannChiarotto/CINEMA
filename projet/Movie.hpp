#ifndef MOVIE
#define MOVIE

#include <iostream>
#include <vector>

using namespace std;

class Movie
{
private:
	string m_titre;
	int m_duree;
	vector<string>

public:

	//Constructeurs
	Movie(string t, string a);

	//getter
	string get_titre() const;
	string get_auteur() const;

};

#endif