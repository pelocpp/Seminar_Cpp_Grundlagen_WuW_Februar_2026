#include "Time.h"

#include <iostream>

extern void rectangles();

int main()
{
    rectangles();
}

int main_difference()
{
    Time now(11, 38, 0);
    now.print();

    Time mittag(12, 30, 0);
    mittag.print();

    // will die Differenz bilden
    // 0 Stunden, 52 Minuten, 0 Sekunden

    // Time abstand = difference(now, mittag);  // C-Stil // prozeduraler Stil

    // mittag.m_hours = 10;  // auﬂerhalb

    Time abstand = now.difference(mittag);  // OO Stil

    abstand.print();

    return 0;
}

int main_zweite_schritte()
{
    Time now ( 11, 54, 0 ) ;
    now.print();

    int wievieleMinuten = now.getMinutes();
    std::cout << "Minuten: " << wievieleMinuten << std::endl;

    Time pause (12, 30, 0);
    pause.print();

    Time time;   // Standard-Konstruktor  // Default-Konstruktor

    // ====================================
    // Will now und pause vergleichen



    return 0;
}


int main_erste_schritte()
{
    //Time now;

    ////now.hours = 9999;
    ////now.minutes = 50;
    ////now.seconds = 20;
    //now.setHours(9999);
    //now.setMinutes(50);
    //now.setSeconds(20);

    //now.print();

    //int wievieleMinuten = now.getMinutes();
    //std::cout << "Minuten: " << wievieleMinuten << std::endl;

    //Time pause;
    ////pause.hours = 10;
    ////pause.minutes = 30;
    ////pause.seconds = 0;
    //pause.setHours(10);
    //pause.setMinutes(30);
    //pause.setSeconds(0);

    //pause.print();

    return 0;
}
