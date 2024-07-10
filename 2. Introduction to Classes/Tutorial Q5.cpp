#include <iostream>
using namespace std;

class Instructor {
private:
    string firstName;
    string lastName;
    int office_no;
public:
    Instructor(string fName, string lName, int offno) {
        firstName = fName;
        lastName = lName;
        office_no = offno;
    }
    void getInstructor() {
        cout << firstName << " " << lastName << " " << office_no << endl;
    }
};

class Classroom {
private:
    int building_no;
    int room_no;
public:
    Classroom(int b, int r) {
        building_no = b;
        room_no = r;
    }
    void getClassroom() {
        cout << building_no << endl;
        cout << room_no << endl;
    }
};

int main() {
    Instructor i("C", "Y", 123);
    Classroom c(22, 303);
    i.getInstructor();
    c.getClassroom();
    return 0;
}