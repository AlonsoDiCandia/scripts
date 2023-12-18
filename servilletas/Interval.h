

#include <tuple>
#include <iostream>
using namespace std;

#ifndef INTERVAL_H
#define INTERVAL_H

class Interval {
public:
    Interval(); // Constructor por defecto
    explicit Interval(double val); // Contructor explicito
    Interval(double val1, double val2); // Constructor con parámetros
    
    double inferior() const;
    double superior() const;

    vector<double> valores() const;
    
private:
    double menor;
    double mayor;
};

#endif //INTERVAL_H
