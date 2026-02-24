=============================================================

C/C++ Seminar

Guten Morgen

Peter Loos

Dienstag: Start:  8.45 == Ende: 16.45.

=============================================================

peter.loos@gmx.de
-----------------

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


=============================================================

Bin ich 

== innerhalb der Klasse
== außerhalb der Klasse

=======================================================

const:

A) const zum Schutz der Objekte

B) const für bessere Laufzeit: Performanz

=======================================================
=======================================================

OO: Objekt-Orientierte Programmierung
-------------------------------------

== Schutz der Daten (private)

== Vererbung

================================================================

Vererbung:

Whyyyyyyyyyyyyyyyyyyyyy

Um Code zu sparen ......

Krankenversicherung
Lebensversicherung

=================================================

Konzept:

i) Vererbung ist ein sprachliches Konzept

ABER: 

WANN setzt man Vererbung ein ??????????????????????

== Klasse Rechteck  // Rectangle

== Klasse FarbigesRechteck // ColoredRectangle

Design:  Frage:

== Ein farbiges Rechteck ist schöner als ein Rechteck.
== Ein Rechteck und ein farbiges Rechteck sind in der Disko.

== Ein farbiges Rechteck ist ein Rechteck.

   Beziehungen // Relationsships

   is-a  // ist-ein Beziehung

   Ein farbiges Rechteck steht in der ist-ein Beziehung zu einem Rechteck.

== Klasse Linie  // Line
== Klasse Punkt // Point

Eine Linie besteht aus unendlich vielen Punkten.

Ein Linie ist ein Punkt:  Neeeeeeeeeee

Ein Punkt ist eine Linie: Neeeeeeeeee

Eine Linie hat zwei // besteht aus zwei Punkten.

   has-a  // hat-ein  

Antwort:

class Line {

    Point m_begin;
    Point m_end;
    ...
};

ist-ein Beziehung   =========> Vererbung




Vererbung  ===> Wiederverwendung

Nomenklatur:

Basisklasse // base class
Parent Class // Vaterklasse


Abgeleitete Klasse // Derived Class
Kind Klasse // child class

Die abgeleitete Klasse ist eine Spezialisierung
der Vaterklasse

Die Vaterklasse ist eine Verallgemeinerung (Generalisierung)
der Kindklasse.

=================================================================

Wenn es NICHT um Produkt-Code geht:

Kann man Klassen und Methoden auch kürzer schreiben:

In einer Datei kann man eine Klasse auch definieren + implementieren.


    Versicherung
       Adressdaten
       Zeitpunkt: Abschluss

    Lebenversicherung
    Krankenversicherung

    ========================================

 Was tut virtual

 Es gibt 2 Arten eines Methodenaufrufs:

 DIREKT:  Der TYP der Variablen zur Übersetzungszeit entscheidet

 
 INDIREKT: Der TYP des Objekts zur LAUFZEIT entscheidet.

   Für INDIREKT muss ich virtual hinschreiben.

a) Man könnte IMMER virtual hinschreiben.

   (( Java  // final ))

b) VIRTUAL IST langsamer.

c) WILL ICH - bei der einen oder andere Methode - 
   das so haben.

   Beispiel:

   Rectangle()  ==> EraseBackground

   Will ich das durchreichbar machen: NEIN.

   ==> Draw
   ==> BerechneKostenProJahr

==================================================================

Bibliothek:  STL

"Etwas eigenen Charme" // Extrem hohe Performanz
------------------------------------------------

C#, Java  ==> Straight Forward ...

Alexander Stepanow: Generische Programmierung

Bjarne Stroustrup:  C++ ==> Bibliothek

APL: Vector ===> std::vector

STL: Standard Template Library  // Schablone 

Konzepte:

== STL Container
== STL Iteratoren
== STL Algorithmen

== STL Container
  
   std::vector  

   Hash Tabellen Technik  // std::unorderer_map

==========================

Transparenz // leichte Austauschbarkeit ihrer
Container ermöglichen.

Wie, wenn es nicht mit dem [] Operator geht ???

STL Iteratoren:

Was beschreibt ein STL Iterator ????

   Eine Position in einem STL Container.

   Nicht mit dem WERT an der Position zu verwechseln:

   Wert:                  operator*
   Nächte Position:       operator ++
   Position vergleichen:  operator ==

Wie kommt man zu einer Position:

Container:  ==>  begin()
                 end()    // exakt: Die Position NACH dem letzen Element

Es gibt VIELE Container.

Jeder Container definiert seinen EIGENEN
Datentyp für Positionen.

==> Deshalb ist dieser Typ
    IN der Container Klasse definiert.

===============================================

C++: Klassischen Definition  // ca: 1990

     Modern C++              // ab 2011 


Boiler-plate Code:

===============================================

STL Container
STL Iteratoren
STL Algorithmen

std::for_each


===============================================

C++ Introduction

Modern C++

===============================================
