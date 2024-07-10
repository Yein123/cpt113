#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int width;
    public:
        Rectangle(){
            length = 0;
            width = 0;
        }
        int setLength(int l){
            length = l;
        }
        int setWidth(int w){
            width = w;
        }
        int getArea(){
            return length*width;
        }
};

int main(){
    Rectangle kitchen,bedroom,den;
    kitchen.setLength(10);
    kitchen.setWidth(5);
    cout<<kitchen.getArea()<<endl;

    bedroom.setLength(15);
    bedroom.setWidth(10);
    cout<<bedroom.getArea()<<endl;

    den.setLength(5);
    den.setWidth(5);
    cout<<den.getArea()<<endl;
    return 0;
}