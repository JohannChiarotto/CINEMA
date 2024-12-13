#include "Session.hpp"

Session::Session(string d, string h, int p)
{
	m_date = d;
	m_heure = h;
	m_nb_places = p;
}

string Session::get_date() const
{
	return m_date;
}

string Session::get_heure() const
{
	return m_heure;
}

int Session::get_nb_places() const
{
	return m_nb_places;
}
