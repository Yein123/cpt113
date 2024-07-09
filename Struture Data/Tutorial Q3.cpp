#include <iostream>
using namespace std;

struct Person{
    string name;
    string skill;
};

void getData(const Person &p){
    cout<<"Name: "<<p.name<<endl;
    cout<<"Skill: "<<p.skill<<endl;
}

void setName(Person &p){
    cout<<"Enter new name"<<endl;
    cin>>p.name;
    cout<<"New name is "<<p.name<<endl;
}

void setSkill(Person &p){
    cout<<"Enter new skill"<<endl;
    cin>>p.skill;
    cout<<"New skill is "<<p.skill<<endl;
}

int main(){
    // Create and initialize an array of Person objects
    Person p[4]={{"San","Heal"},
                {"Mukuda","Gourmet"},
                {"Tamaru","Sword"},
                {"Sonoko","Imagine"}};
    int choice=0;
    char num;

    // Display the menu
    while(choice!=4){
        cout<<"1. Change the character's name."<<endl;
        cout<<"2. Change the character's skill."<<endl;
        cout<<"3. Display all character's name and skill"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        if(choice==1){
            for(int i=0;i<4;i++){
                cout<<i+1<<". "<<p[i].name<<endl;
            }
            cout<<"Choose the name you want to change"<<endl;
            cin>>num;
            setName(p[num-1]);
        }
        else if(choice==2){
            for(int i=0;i<4;i++){
                cout<<i+1<<". "<<p[i].skill<<endl;
            }
            cout<<"Choose the skill you want to change"<<endl;
            cin>>num;
            setSkill(p[num-1]);
        }
        else if (choice==3)
        {
            for(int i=0;i<4;i++){
                getData(p[i]);
            }
        }
        else{
            cout<<"Invalid choice"<<endl;
        }
    }

    return 0;
}