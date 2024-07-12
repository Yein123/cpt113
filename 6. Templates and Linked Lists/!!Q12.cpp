#include <iostream>
#include <cmath>
using namespace std;

class PersonInfo{
    private:
        string name;
        int age;
        long int IC;
        string gender;

    public:
        int findAge(){
            int remainder = IC/1E10;
            //remainder only get 2 digit of the year
            if(remainder >24){
                age = 2024 - (1900 + remainder);
            }
            else{
                age = 2024 - (2000 + remainder);
            }
            return age;
        }
};

int main(){
    PersonInfo person;
    LinkedList<PersonInfo> list; //create a linked list of PersonInfo objects
    return 0;
}
//refer pdf answer to see the full code