#include<iostream>
using namespace std;

int LeapYear(int year){
    if(year % 400 == 0){
        cout << "Yes, " << year << " is a Leap year.";
    }
    else if(year % 4 == 0 && year % 100 != 0){
        cout << "Yes, " << year << " is a Leap year.";
    }
    else {
        cout << "No, " << year << " is not a Leap year.";
    }
    return 0;
}

int main(){
    int year;
    cout << "For which year you want to find out that whether it is leap year or not :  ";
    cin >> year;
    LeapYear(year);
    return 0;
}