
#include "Time.h"

#include <iostream>

// ich empfehle das NICHT !!!

// using namespace std;

void Time::print()
{
    std::cout << m_hours << ":" 
        << m_minutes << ":" 
        << m_seconds << std::endl;
}

void Time::reset()
{
    m_hours = 0;
    m_minutes = 0;
    m_seconds = 0;
}

void Time::setHours(int hours)  // Name des Parameters
{
    if (hours >= 0 && hours < 24)
    {
        m_hours = hours;
    }
    else
    {
        std::cout << "Falscher Stundenwert:" << hours << std::endl;
        hours = 0;
    }
}

void Time::setMinutes(int m)
{
    if (m >= 0 && m < 60)
    {
        m_minutes = m;
    }
    else
    {
        std::cout << "Falscher Minutenwert:" << m << std::endl;
        m_minutes = 0;
    }
}

void Time::setSeconds(int s)
{
    m_seconds = s;

    if (s >= 0 && s < 60)
    {
        m_seconds = s;
    }
    else
    {
        std::cout << "Falscher Sekundenwert:" << s << std::endl;
        m_seconds = 0;
    }
}

int Time::getHours()  
{
    return m_hours;
}

int Time::getMinutes()
{
    return m_minutes;
}

int Time::getSeconds()
{
    return m_seconds;

}

// Konstruktor
Time::Time(int h, int m, int s)
{
    // sehr einfach, kann zu Fehlern führen
    //hours = h;
    //minutes = m;
    //seconds = s;

    // besser, falsche Werte werden überprüft

    setHours(h);
    setMinutes(m);
    setSeconds(s);
}

Time::Time()
{
    m_hours = 0;
    m_minutes = 0;
    m_seconds = 0;
}

//Vertrag::Vertrag()
//{
//    isValid = true;  // Status: Noch inaktiv
//    vertrags_nummer = 0;  
//}


Time Time::difference(Time& other)
{
    // wie kann man das machen
    // Trick: beide Uhrzeiten auf Sekunden umrechen
    int thisSeconds = m_hours * 3600 + m_minutes * 60 + m_seconds;

    int otherSeconds = other.m_hours * 3600 + other.m_minutes * 60 + other.m_seconds;

    int diffSeconds = 0;

    if (thisSeconds < otherSeconds) {
        diffSeconds = otherSeconds - thisSeconds;
    }
    else {
        diffSeconds = thisSeconds - otherSeconds;
    }

    // 1000 Sekunden ==> hh:mm:ss

    int hours = diffSeconds / 3600;

    // wieviele Sekunden sind dann noch übrig?
    diffSeconds = diffSeconds % 3600;   // Rest bei Division durch 3600

    int minutes = diffSeconds / 60;

    // wieviele Sekunden sind jetzt noch übrig?
    diffSeconds = diffSeconds % 60;   // Rest bei Division durch 60

    int seconds = diffSeconds;

    // hours, minutes, seconds ==> Objekt Time ==> Ergebnis

    Time result(hours, minutes, seconds);

    return result;
}

