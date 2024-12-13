#include "Ticket.hpp"

Ticket::Ticket(string f, string s, int nb, int p)
{
	m_film = f;
	m_seance = s;
	m_nb_places = nb;
	m_prix = p;
}