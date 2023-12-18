#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Interval.h"

class Rectangle {
public:
    Rectangle(); // Constructor por defecto
    Rectangle(double val1, double val2); // Constructor con parámetros

    int get_rx();
    int get_ry();

    void set_rx(int x);
    void set_ry(int y);

    vector<double> eje_x() const;
    vector<double> eje_y() const;

    bool isOverlap(Rectangle r);
    
private:
    Interval x;
    Interval y;

    int rx, ry;
};

#endif //RECTANGLE_H
