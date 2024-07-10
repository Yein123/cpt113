#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int id;
        string desasiswa;
        int year;
        int sem;
        float cgpa;
    public:
        void setData(string n, int i, string d, int y, int s, float c){
            name = n;
            id = i;
            desasiswa = d;
            year = y;
            sem = s;
            cgpa = c;
        }
        void getData()const{
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Desasiswa: " << desasiswa << endl;
            cout << "Year: " << year << endl;
            cout << "Sem: " << sem << endl;
            cout << "CGPA: " << cgpa << endl;
        }
};

int main(){
    Student s1;
    string name, desasiswa;
    int id, year, sem;
    double cgpa;

    // user input
    cout<<"Enter the student details: \n";
    cout<<"Name: ";
    cin>>name;
    cout<<"ID: ";
    cin>>id;
    cout<<"Desasiswa: ";
    cin>>desasiswa;
    cout<<"Year: ";
    cin>>year;
    cout<<"Sem: ";
    cin>>sem;
    cout<<"CGPA: ";
    cin>>cgpa;
    s1.setData(name, id, desasiswa, year, sem, cgpa);

    // directly setting the values
    //s1.setData("Ali", 1234, "Kolej 1", 2, 1, 3.5);
    s1.getData();
    return 0;
}