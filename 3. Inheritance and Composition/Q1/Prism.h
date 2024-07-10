#ifndef PRISM_H
#define PRISM_H

#include <iostream>
#include "Shape.h"
using namespace std;

class Prism:public Shape{
    private:
        int volume;
    public:
        Prism(){
            volume = 0;
        }
        Prism(double h, double w, double l):Shape(h, w, l){
            volume = h * w * l;
        }
        ~Prism(){
            cout << "Destroying Prism obj" << endl;
        }
        void print();
        void setDimension(double , double , double , double);
        double calculateVolume();
};
#endif