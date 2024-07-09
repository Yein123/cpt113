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
void getData(Student *s){
    cout << "Enter your name: ";
    getline(cin,s->name);
    cout << "Enter your ID: ";
    //cin.ignore();
    cin >> s->id;
    cout << "Enter your Desasiswa: ";
    cin >> s->desasiswa;
    cout << "Enter your year: ";
    cin >> s->year;
    cout << "Enter your semester: ";
    cin >> s->semester;
    cout << "Enter your CGPA: ";
    cin >> s->cgpa;
    cin.ignore();
}

void display(const Student *s){
    cout << "\nName: " << s->name << endl;
    cout << "ID: " << s->id << endl;
    cout << "Desasiswa: " << s->desasiswa << endl;
    cout << "Year: " << s->year << endl;
    cout << "Semester: " << s->semester << endl;
    cout << "CGPA: " << s->cgpa << endl;
}

int main(){
    //Way 1 : Dynamic Allocation where the size of the array can be determined at runtime 
    Student *stuList; //array of structure
    stuList = new Student[5];

    //Way 2 : Static Allocation where the size of the array is fixed at compile time
    //Student *stuList[5];

    //get data from user
    for(int i=0; i<5; i++){
        getData(&stuList[i]);
    }

    //display the data
    for(int i =0; i<5; i++){
        // remember to use & to pass the address of the structure
        // stuList[i] gives you the value of the structure at index i
        // &stuList[i] gives you the address of the structure at index i
        display(&stuList[i]); 
    }

    //delete the dynamic memory
    delete [] stuList;

    return 0;
}