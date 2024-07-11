#include <iostream>
using namespace std;

class Box{
    private:
        int length;
        int width;
        int height;
    public:
        Box(int l,int w,int h){
            length = l;
            width = w;
            height = h;
        }
        Box operator+(const Box &other){
            return Box( length + other.length, width + other.width , height + other.height);
        }

        bool operator=(const Box &other){
            return (length == other.length && width == other.width && height == other.height);
        }
};


int main(){
    Box box1(2,2,2), box2(3,3,3);
    Box box3 = box1 + box2; //call + operator overloading here // (5,5,5)

    if (box1 = box2){ // = operator overloading
        cout<<"The box 1 and box 2 have same volume."<<endl;
    }
    else{
        cout<<"The box 1 and box 2 have different volume."<<endl;
    }
    return 0;
}