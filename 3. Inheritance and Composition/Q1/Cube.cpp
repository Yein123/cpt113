#include <iostream>
#include "Shape.h"
#include "Cube.h"
using namespace std;

void Cube::print(){
    s.print();
    cout << "Volume: " << volume << endl;
}
void Cube::setDimension(double h){
    s.setVal(h, h, h);
    volume = h * h * h;
}
double Cube::calculateVolume(){
    double width,  height;
    s.getHW(width, height);
    volume = s.getLength() * (height) * (width);
    return volume;
}

int main(){
    Cube c1;
    c1.setDimension(2);
    c1.print();
    c1.calculateVolume();
    cout << "Volume: " << c1.calculateVolume() << endl;
    return 0;
}