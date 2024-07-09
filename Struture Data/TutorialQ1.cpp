#include <iostream>
using namespace std;

//structure declaration
struct Student{
    string name;
    int id;
    string desasiswa;
    int year;
    int semester;
    double cgpa;
};

//function declaration
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

    //initialize the array of structure
    // Student stuList[5]={{"Learn", 12345, "Desasiswa A", 2, 1, 3.5}, 
    //                     {"Code", 12346, "Desasiswa B", 3, 2, 3.6}, 
    //                     {"C++", 12347, "Desasiswa C", 4, 3, 3.7}, 
    //                     {"Java", 12348, "Desasiswa D", 5, 4, 3.8}, 
    //                     {"Python", 12349, "Desasiswa E", 6, 5, 3.9}};
    
    //get data from user
    for(int i=0; i<5; i++){
        getData(stuList[i]);
    }

    //display the data
    for(int i =0; i<5; i++){
        display(stuList[i]);
    }

    return 0;
}