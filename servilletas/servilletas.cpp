#include "Interval.h"
#include "Rectangle.h"
#include <iostream>
#include <tuple>



int main() {
    Rectangle r1(0.568041, 0.872739);
    Rectangle r2(0.518347, 0.853028);

    std::vector<double> x1 = r1.eje_x();
    std::vector<double> y1 = r1.eje_y();
    // Interval y = r1.eje_y();   

    std::cout << "Eje x1: [" << x1[0] << "," << x1[1] << "]" << std::endl;
    std::cout << "Eje y1: [" << y1[0] << "," << y1[1] << "]" << std::endl;


    std::vector<double> x2 = r2.eje_x();
    std::vector<double> y2 = r2.eje_y();
    // Interval y = r1.eje_y();   

    std::cout << "Eje x2: [" << x2[0] << "," << x2[1] << "]" << std::endl;
    std::cout << "Eje y2: [" << y2[0] << "," << y2[1] << "]" << std::endl;

    if (r1.isOverlap(r2)) {
        std::cout << "Los rectangulos se solapan" << std::endl;
    } else {
        std::cout << "Los rectangulos NO se solapan" << std::endl;
    }
    return 0;
}
 