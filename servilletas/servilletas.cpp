#include "Interval.h"
#include "Rectangle.h"
#include <iostream>
#include <tuple>
#include <fstream>
#include <string>



int main() {
    fstream newfile;
    bool first = true;
    double i1_old, i2_old;

    newfile.open("./data/datos-50.txt",ios::in); //open a file to perform read operation using file object
    if (newfile.is_open()){ //checking whether the file is open
        string tp;
        while(getline(newfile, tp)){ //read data from file object and put it into string.
            double i1, i2;
            i1 = std::stod(tp.substr(0, 8));
            i2 = std::stod(tp.substr(9, 18));

            if (!first) {
                Rectangle r1(i1, i2);
                Rectangle r2(i1_old, i2_old);

                std::vector<double> x1 = r1.eje_x();
                std::vector<double> y1 = r1.eje_y();
                // Interval y = r1.eje_y();   

                // std::cout << "Eje x1: [" << x1[0] << "," << x1[1] << "]" << std::endl;
                // std::cout << "Eje y1: [" << y1[0] << "," << y1[1] << "]" << std::endl;


                std::vector<double> x2 = r2.eje_x();
                std::vector<double> y2 = r2.eje_y();
                // Interval y = r1.eje_y();   

                // std::cout << "Eje x2: [" << x2[0] << "," << x2[1] << "]" << std::endl;
                // std::cout << "Eje y2: [" << y2[0] << "," << y2[1] << "]" << std::endl;

                if (r1.isOverlap(r2)) {
                    std::cout << "Los rectangulos se solapan" << std::endl;
                } else {
                    std::cout << "Los rectangulos NO se solapan" << std::endl;
                }

                i1_old = i1;
                i2_old = i2;

                // cout << i1 << " " << i2 << "\n"; //print the data of the string
                } else {
                first = false;
            }
        }
        newfile.close(); //close the file object.
    }
    
    return 0;
}