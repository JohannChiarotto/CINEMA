#include "Cinema.hpp"

Cinema::Cinema()
    : m_details(), m_reservation()
{
}

Cinema::Cinema(const Movie& details, const Ticket& reservation)
    : m_details(details), m_reservation(reservation)
{
}