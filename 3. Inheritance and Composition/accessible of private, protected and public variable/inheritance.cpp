#include <iostream>
using namespace std;

class Base{
    private:
        int privateVar;
    protected:
        int protectedVar;
    public:
        int publicVar;
        int getPrivateVar()const{
            return privateVar;
        }
        int getProtectedVar()const{
            return protectedVar;
        }
};

class Derived:public Base{
    public:
        void display(){
            //cout<<privateVar<<endl; inaccessible in derived
            Base::getPrivateVar();
            cout<<protectedVar<<endl;
            cout<<publicVar<<endl;
        }
};

int main(){
    Base base1;
    //cout<<base1.privateVar;  inaccessible in main

    //cout<<base1.protectedVar; inaccessible in main
    cout<<base1.getPrivateVar()<<endl;
    cout<<base1.getProtectedVar()<<endl;
    cout<<base1.publicVar;

    Derived d1;
    //cout << d1.privateVar<<endl;
    //cout << d1.protectedVar <<endl;
    cout << d1.publicVar<<endl;

    return 0;
}