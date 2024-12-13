#include "Ticket.hpp"

Ticket::Ticket(string f, string s, int nb, int p)
{
	m_film = f;
	m_seance = s;
	m_nb_places = nb;
	m_prix = p;
}

string Ticket::get_film() const
{
	return m_film;
}

string Ticket::get_seance() const
{
	return m_seance;
}

int Ticket::get_nb_places() const
{
	return m_nb_places;
}

float Ticket::get_prix() const
{
	return m_prix;
}
