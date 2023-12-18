#include "Interval.h"
#include <iostream>
#include <tuple>

// Constructor por defecto
Interval::Interval() {
    menor = 0.0;
    mayor = 0.0;
}
// Constrcutor explicit
Interval::Interval(double val) : menor(val - 0.05), mayor(val + 0.05) {}

// Constructor con parámetros
Interval::Interval(double val1, double val2) {
    menor = val1;
    mayor = val2;
}

double Interval::inferior() const {
    return menor;
}

double Interval::superior() const {
    return mayor;
}

std::vector<double> Interval::valores() const {
    std::vector<double> lista;
    lista.push_back(menor);
    lista.push_back(mayor);
    return lista;
}