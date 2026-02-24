=============================================================

C/C++ Seminar

Guten Morgen

Peter Loos

Dienstag: Start:  8.45 == Ende: 16.45.

=============================================================

peter.loos@gmx.de

https://github.com/pelocpp

https://github.com/pelocpp/c_introduction

=============================================================

TODO:

Klassenvariablen

Diff Methode

=============================================================


C++

https://github.com/pelocpp

Uhrzeit:

struct Time
{
    int hours;
    int minutes;
    int seconds;
}

===> Daten

// ==============================

printTime(struct Time time);
resetTime(struct Time time);

===> Tätigkeiten auf Time Daten

===> Objekt-Orientierten Programmierung

==>  Klasse // class

// ==============================

2 / 3 Dateien:

i) Beschreibung der Klasse:    Header-Datei (.h)

ii) Realisierung der Klasse:   Quellcode-Datei  (.cpp)

iii) Anwendung                 Quellcode-Datei  (.cpp)

======================================================

Namenraum:  

Was ist ein Namensraum ???


namespace Lebenversicherung
{
    class Vertrag
    {
    }
}

========

namespace Krankenversicherung
{
    class Vertrag
    {
    }
}

========

void tueWas()
{
    Lebenversicherung::Vertrag v1;

    Krankenversicherung::Vertrag v2;
}

Einen reservierten Namensraum:  std  // Standard

cout

====================================================

C:   Kennt KEINE OO

     Prozedurale Programmiersprache

     Variablen  // Funktionen

C++: OO Programmiersprache

     Variable  =====> Objekt // Instanz

     Funktion  ==>    Methode

     Variablen innerhalb einer Klasse ==>

                       Instanzvariablen
                       (( Objektvariablen ))
                       member variable
                       Membervariable

    "ein Objekt anlegen" ==> 

        die Klasse instanziieren // eine Instanz anlegen


======================================================

OO: Hat Ziele

Daten müssen IMMER einen korrekten // sinnvollen
Wert haben.

Zu jedem Zeitpunkt:  Erzeugung eines Objekts.

Korrektheit: Wie ????

Konzept:

== Zugriffsschutz: public // private

== getter und setter Methoden

Eine setter Methode hat dafür zu sorgen, dass nur KORREKTE Werte
im Objekt aufgenommen werden.


// =======================================

Wie kann ein Objekt gleich bei seiner Erzeugung
korrekt vorbelegt werden ???

Man verbindet die Objekt Erzeugung
mit dem Aufruf einer speziellen Methode.

Konstruktor(en)

SYNTAX:

    Rückgabetyp: NICHTS Time (  parameter );

    Name der Methode = Name der Klasse

=============================================================

Clean-Code

=============================================================

Schlüsselwort:  C++  (Java, C#) 

    this  //  Python: _self

    Zeigt auf Instanzvariablen // -Methoden

=============================================================

Übergabe von Objekten an Methoden / Funktionen:

    Time difference(Time other);

Geht so.

Kleines Problem: Das an 'difference' übergebene Objekt ('mittag')
wird dabei KOPIERT !!!!!!!!!!

Performanz-Anforderungen

Wie könne wir die Kopie vermeiden ????????

==> Ginge: Adressen / Pointern  // C - Stilistik

==> Geht (Besser): Referenz     // C++ - Stilistik


