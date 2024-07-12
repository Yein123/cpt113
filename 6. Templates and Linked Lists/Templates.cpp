#include <iostream>
using namespace std;

template <class T>
class Rectangle
{
    private:
        T width,length;
    public:
        void setData(T w, T l)
            {width = w; length = l;}
        T getWidth();
        T getLength()
            {return length;}
        T getArea()
            {return width*length;}
};

// Member function definition with template
template <class T>
T Rectangle<T>::getWidth()
{
    return width;
}

int main(){
    Rectangle <int> r1;
    return 0;
}