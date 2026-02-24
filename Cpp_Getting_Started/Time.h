#pragma once

// #include <ostream>

class Time
{
private:
    int m_hours;      // Instanzvariable
    int m_minutes;
    int m_seconds;

public:
    // Konstruktoren
    Time();
    Time(int hours, int minutes, int seconds);

public:
    // setter // schreibende Zugriff
    void setHours(int);  // Schnittstelle einer Methode
    void setMinutes(int);
    void setSeconds(int);

    // getter // lesende Zugriff
    int getHours();
    int getMinutes();
    int getSeconds();

public:
    void print();
    void reset();
    // void addSecond();

    // Time difference(Time other);    // KOPIE
    Time difference(Time& other);   // Referenz
};
