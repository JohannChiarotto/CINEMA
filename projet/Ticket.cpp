#include "Ticket.hpp"

Ticket::Ticket(string f, string s, int nb, float p)
{
	m_film = f;
	m_seance = Session();
	m_nb_places = nb;
	m_prix = p;
}

string Ticket::get_film() const
{
	return m_film;
}

int Ticket::get_nb_places() const
{
	return m_nb_places;
}

float Ticket::get_prix() const
{
	return m_prix;
}
