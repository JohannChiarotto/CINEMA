#include "Movie.hpp"

Movie::Movie(string t, int d)
{
    m_titre = t;
    m_duree = d;
}

string Movie::get_titre() const
{
    return m_titre;
}

int Movie::get_duree() const
{
    return m_duree;
}

//vector<Session> Movie::get_liste() const
//{
//    return vector<Session>();
//}

