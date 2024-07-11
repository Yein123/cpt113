#include <iostream>
using namespace std;
class Apple;//class declaration
class Orange;

void AccessAll(Apple &apple,Orange &oren){
    cout<< apple.privateApple<<endl;
    cout<< oren.privateOrange<<endl;
}

class Apple{
    private:
        int privateApple=1;
    protected:
        int protectedApple=2;
    public:
        int publicApple=3;
        friend class Orange;
        // void accessOrange(Orange &oren){
        //     cout<<privateOrange<<endl;
        // } cannot do like this
        friend void AccessAll(Apple &apple,Orange &oren);
};

class Orange{
    private:
        int privateOrange=4;
    public:
        // Accessing Apple's members directly
        void accessApple(Apple &apple){
            cout<<apple.privateApple<<endl;
            cout<<apple.protectedApple<<endl;
            cout<<apple.publicApple<<endl;
        }
        friend void AccessAll(Apple &apple,Orange &oren);
};

int main(){
    Apple apple1;
    Orange oren1;
    oren1.accessApple(apple1);
    AccessAll(apple1,oren1);
    return 0;
}