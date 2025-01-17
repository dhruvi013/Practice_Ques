#include<iostream>
using namespace std;

float FindArea(float r){
    return(3.14 * r * r);
}

int main(){
    float r;
    cout << "Enter radious of the circle: ";
    cin >> r;
    cout << "Area : " << FindArea(r);
}