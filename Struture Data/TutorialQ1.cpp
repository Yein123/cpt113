#include <iostream>
using namespace std;

struct Student{
    string name;
    int id;
    string desasiswa;
    int year;
    int semester;
    double cgpa;
};

void getData(Student &s){
    cout << "Enter your name: ";
    getline(cin,s.name);
    cout << "Enter your ID: ";
    //cin.ignore();
    cin >> s.id;
    cout << "Enter your Desasiswa: ";
    cin >> s.desasiswa;
    cout << "Enter your year: ";
    cin >> s.year;
    cout << "Enter your semester: ";
    cin >> s.semester;
    cout << "Enter your CGPA: ";
    cin >> s.cgpa;
    cin.ignore();
}

void display(const Student &s){
    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "Desasiswa: " << s.desasiswa << endl;
    cout << "Year: " << s.year << endl;
    cout << "Semester: " << s.semester << endl;
    cout << "CGPA: " << s.cgpa << endl;
}

int main(){
    Student stuList[5]; //array of structure

    for(int i=0; i<5; i++){
        getData(stuList[i]);
    }
    for(int i =0; i<5; i++){
        display(stuList[i]);
    }
    return 0;
}