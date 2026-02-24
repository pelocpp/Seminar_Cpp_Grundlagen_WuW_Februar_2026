#include <iostream>

class Rectangle
{
private:
    int m_x;    // linke obere Ecke
    int m_y;

    int m_width;
    int m_height;

public:
    // Konstruktor
    Rectangle(int x, int y, int width, int height)
    {
        m_x = x;
        m_y = y;
        m_width = width;
        m_height = height;
    }

    // Entscheidungssache: Der Entwickler DIESER Klasse
    virtual void print()
    {
        // Hintergrund des Rechtecks löschen
        std::cout << "I'm a Rectangle\n";
    }
};


class ColoredRectangle : public Rectangle
{
public:
    ColoredRectangle(int x, int y, int width, int height, int color)
        : Rectangle (x, y, width, height)
    {
        m_color = color;
    }

    void print() override
    {
        // Farbe malen
        std::cout << "I'm a ColoredRectangle\n";
    }

private:
    int m_color;
};

class BlackAndWhiteRectangle : public Rectangle
{
public:
    BlackAndWhiteRectangle(int x, int y, int width, int height, int color)
        : Rectangle(x, y, width, height)
    {
       // m_color = color;
    }

    void print() override
    {
        // Farbe malen
        std::cout << "I'm a BlackAndWhiteRectangle\n";
    }

private:
  //  int m_color;
};



void rectangles_die_erste()
{
    Rectangle r (10, 10, 20, 30);
    r.print();
    
    ColoredRectangle cr(10, 10, 20, 30, 999);
    cr.print();
}

void rectangles_die_zweite()
{
    Rectangle* r;

    ColoredRectangle cr(10, 10, 20, 30, 999);

    r = & cr;  // Geht das? UNTERSCHIEDLICHE TYPEN

    r->print();  // a) Rectangle: r ist vom Typ Rectangle
                 // b) ColoredRectangle: Wir haben es mit einem
                    // ColoredRectangle Objekt zu tun.
}


void rectangles()
{
    ColoredRectangle cr1(10, 10, 20, 30, 999);
    ColoredRectangle cr2(10, 10, 20, 30, 999);

    BlackAndWhiteRectangle bw1(10, 10, 20, 30, 999);
    BlackAndWhiteRectangle bw2(10, 10, 20, 30, 999);
    BlackAndWhiteRectangle bw3(10, 10, 20, 30, 999);

    Rectangle* myRectangles[5]{
        &cr1,& bw1,& cr2,& bw2,& bw3
    };

    for (int i = 0; i < 5; ++i) {

        // Polymorphie: OO
        myRectangles[i]->print();

    }

}