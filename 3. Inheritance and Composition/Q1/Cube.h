#ifndef CUBE_H
#define CUBE_H
#include <iostream>
#include "Shape.h"
using namespace std;

class Cube{
    private:
        double volume;
        Shape s;
    public:
        Cube(){
            volume = 0;
        }
        ~Cube(){
            cout << "Destroying Cube obj" << endl;
        }
        void print();
        void setDimension(double);
        double calculateVolume();
};
#endif