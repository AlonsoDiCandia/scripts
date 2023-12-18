#include "Rectangle.h"
#include "Interval.h"
#include <iostream>
#include <tuple>

// Constructor por defecto
Rectangle::Rectangle() {
    x = Interval(0);
    y = Interval(0);

    rx = 0.0;
    ry = 0.0;
}

// Constructor con parámetros
Rectangle::Rectangle(double val1, double val2) {
    x = Interval(val1);
    y = Interval(val2);

    ry = 0.0;
    ry = 0.0;
}

double Rectangle::get_rx() {
    return rx;
}

double Rectangle::get_ry() {
    return ry;
}

void Rectangle::set_rx(double x) {
    rx = x;
}

void Rectangle::set_ry(double y) {
    ry = y;
}


vector<double> Rectangle::eje_x() const {
    return x.valores();
}

vector<double> Rectangle::eje_y() const {
    return y.valores();
}

bool Rectangle::isOverlap(Rectangle r) {  
    std::vector<double> x = eje_x();
    std::vector<double> y = eje_y();

    double x_0 = x[0];
    double x_1 = x[1];

    double y_0 = y[0];
    double y_1 = y[1];

    std::vector<double> rx = r.eje_x();
    std::vector<double> ry = r.eje_y();

    double rxi, ryi;

    for (int i=0; i<2; i++) {
        rxi = rx[i];

        if (x_0 <= rxi && x_1 >= rxi) {
            for (int j=0; j<2; j++) {
                ryi = ry[j];

                if (y_0 <= ryi && y_1 >= ryi) {
                    set_rx(rxi);
                    set_ry(ryi);
                    return true;
                }
            }
        } 
    }    

    return false;
}
