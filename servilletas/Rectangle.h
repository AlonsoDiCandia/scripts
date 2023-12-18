#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Interval.h"

class Rectangle {
public:
    Rectangle(); // Constructor por defecto
    Rectangle(double val1, double val2); // Constructor con parámetros

    double get_rx();
    double get_ry();

    void set_rx(double x);
    void set_ry(double y);

    vector<double> eje_x() const;
    vector<double> eje_y() const;

    bool isOverlap(Rectangle r);
    
private:
    Interval x;
    Interval y;

    double rx, ry;
};

#endif //RECTANGLE_H
