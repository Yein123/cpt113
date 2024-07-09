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
    Student stuList[5]; //array of structure

    for(int i=0; i<5; i++){
        cout << "Enter your name: ";
        getline(cin,stuList[i].name);
        cout << "Enter your ID: ";
        cin.ignore();
        cin >> stuList[i].id;
        cout << "Enter your Desasiswa: ";
        cin >> stuList[i].desasiswa;
        cout << "Enter your year: ";
        cin >> stuList[i].year;
        cout << "Enter your semester: ";
        cin >> stuList[i].semester;
        cout << "Enter your CGPA: ";
        cin >> stuList[i].cgpa;
        cin.ignore();
    }
    for(int i =0; i<5; i++){
        cout << "\n\nName: " << stuList[i].name << endl;
        cout << "ID: " << stuList[i].id << endl;
        cout << "Desasiswa: " << stuList[i].desasiswa << endl;
        cout << "Year: " << stuList[i].year << endl;
        cout << "Semester: " << stuList[i].semester << endl;
        cout << "CGPA: " << stuList[i].cgpa << endl;
    }
    return 0;
}