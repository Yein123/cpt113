#include <iostream>
using namespace std;

class Health{
    private:
        int passportNum;
        float *ptr;
    public:
        Health(){
            passportNum=0;
            ptr=new float[2];
        }
        // Copy constructor
        Health(const Health &obj){
            passportNum=obj.passportNum;
            ptr=new float[2];
            for(int i=0;i<2;i++){
                ptr[i]=obj.ptr[i];
            }
        }
        ~Health(){
            delete [] ptr;
        }
        //Overloading assignment operator
        Health operator=(const Health &obj){
            if(this!=&obj){ //checking if the object is not the same
                passportNum=obj.passportNum;
                delete [] ptr; //deleting the previous memory
                ptr=new float[2];
                for(int i=0;i<2;i++){
                    ptr[i]=obj.ptr[i];
                }
            }
            return *this;
        }
        void Health::setDetails()
        {
        cout << "Enter passport Number: ";
        cin >> passportNum;
        cout << "Enter body temperature: ";
        cin >> ptr[0];
        cout << "Enter age: ";
        cin >> ptr[1];
        }
        void Health::getDetails()
        {
        cout << "Passport Number: " << passportNum <<endl;
        cout << "Body temperature: " << ptr[0] << endl;
        cout << "Age: " << ptr[1] << endl;
        }
};

int main(){
    Health person1, person2;
    person1.setDetails();
    person2 = person1;
    person1.getDetails();
    person2.getDetails();
    Health person3 = person1;
    person3.getDetails(); 
    return 0;
}