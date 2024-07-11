#include <iostream>
using namespace std;

class Person{
    private:
        string name;
    protected:
        string phone_no;
    public:
        string email;
        string getName()const{
            return name;
        }
        string getPhoneNO()const{
            return phone_no;
        }
        void setName(string &name){
            this->name = name;
        }
        void setPhoneNO(string &phoneNO){
            this->phone_no = phoneNO;
        }
};

class Student{
    private:
        Person p;
    public:
        Student(string n,string phone,string mail){
            //p.name = n;
            //p.phone_no = phone;
            p.setName(n);
            p.setPhoneNO(phone);
            p.email = mail;
        }
        void display(){
            cout<<p.getName()<<endl;
            cout<<p.getPhoneNO()<<endl;
            //cout<<p.name<<endl; private variable in composition is inaccessible
            //cout<<p.phone_no<<endl; protected variable in composition is inaccessible
            cout<<p.email<<endl;
        }
};

int main(){
    Student s1("Sunny","012345678","sunny@gmail.com");
    //cout<<s1.p.name<<endl;
    //cout<<s1.p.phone_no<<endl;
    //cout<<s1.p.email<<endl;
    s1.display();
    return 0;
}