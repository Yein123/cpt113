#include <iostream>
using namespace std;

class Line{
    private:
        int length;
    public:
        Line(){
            length = 0;
        }
        // overloading constructor
        Line(int l){
            length = l;
        }
        // access to private variable
        void getLength(){
            cout<<length<<endl;
        }
};

int main() {
    Line l(10);
    //we cannot use l.length because it is private
    l.getLength();
    return 0;
}