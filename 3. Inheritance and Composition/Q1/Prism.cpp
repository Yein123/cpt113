#include <iostream>
#include "Shape.h"
#include "Prism.h"
using namespace std;

void Prism::print(){
    //same name function in base class, use scope resolution operator
    Shape::print();
    cout << "Volume: " << volume << endl;
}
void Prism::setDimension(double h, double w, double l,double v=0){
    setVal(h, w, l);
    volume = h * w * l;
}
double Prism::calculateVolume(){
    //cannot use return height * width * length ;
    //because height and width are private members of Shape
    double width,  height;
	getHW(width, height);
	volume = length * (height) * (width);
    return volume;
}

int main(){
    Prism p1(2, 3, 4);
    p1.print();
    cout << "Volume: " << p1.calculateVolume() << endl;
    return 0;
}