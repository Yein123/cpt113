#include <iostream>
using namespace std;

class Date{
    private:
        int month;
        int day;
        int year;
    public:
        Date(){
            month = 0;
            day = 0;
            year = 0;
        }
        Date(int m, int d, int y){
            month = m;
            day = d;
            year = y;
        }
        void setDate(int m, int d, int y){
            month = m;
            day = d;
            year = y;
        }
        void getDate(){
            string monthArr[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
            cout << day << "/" << month << "/" << year << endl;
            cout << monthArr[month-1] << " " << day << ", " << year << endl;
            cout << day << " " << monthArr[month-1] << " " << year << endl;
        }
};

int main(){
    Date d1(12, 31, 2020);
    d1.getDate();

    Date d2;
    int d, m, y;
    cout<<  "Enter the date (dd mm yyyy): ";
    cin >> d >> m >> y;
    //input validation
    while(d<1 || d>31 || m<1 || m>12 || y<0){
        cout << "Invalid date" << endl;
        cout<<  "Enter the date (dd mm yyyy): ";
        cin >> d >> m >> y;
    }
    d2.setDate(d, m, y);
    d2.getDate();
    return 0;
}