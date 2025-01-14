#include<iostream>
using namespace std;

float celsius_to_fahrenheit(float n){
    return ((n * 9 / 5) + 32);
}

int main(){
    float n;
    cout << "Enter temprature in celsius: ";
    cin >> n;
    cout << celsius_to_fahrenheit(n);
    return 0;
}