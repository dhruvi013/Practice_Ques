#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout << "Enter any number: ";
    cin >> a;

    if(a == 0){
        cout << a << " is zero ";
        return 0;
    }
    if(a % 2 == 0){
        cout << a << " is even ";
    }
    else {
        cout << a << " is odd ";
    }
    return 0;
}