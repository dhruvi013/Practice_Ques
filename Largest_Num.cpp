#include<iostream>
using namespace std;

void Largest_Num(int a, int b, int c){
    if(a ==  b && b == c){
        cout << "All three numbers are equall.";
    }
    else if(a > b && a > c){
        cout << a << " is largest.";
    }
    else if (b > a && b > c){
        cout << b << " is largest.";
    }
    else{
        cout << c << " is largest.";
    }
}

int main(){
    int a,b,c;
    cout << "Enter any three num: ";
    cin >> a >> b >> c;
    Largest_Num(a, b, c);
    return 0;
}