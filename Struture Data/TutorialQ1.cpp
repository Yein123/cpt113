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

int main(){
    Student s;
    cout << "Enter your name: ";
    getline(cin,s.name);
    cout << "Enter your ID: ";
    cin.ignore();
    cin >> s.id;
    cout << "Enter your Desasiswa: ";
    cin >> s.desasiswa;
    cout << "Enter your year: ";
    cin >> s.year;
    cout << "Enter your semester: ";
    cin >> s.semester;
    cout << "Enter your CGPA: ";
    cin >> s.cgpa;

    cout << "\n\nName: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "Desasiswa: " << s.desasiswa << endl;
    cout << "Year: " << s.year << endl;
    cout << "Semester: " << s.semester << endl;
    cout << "CGPA: " << s.cgpa << endl;
    return 0;
}