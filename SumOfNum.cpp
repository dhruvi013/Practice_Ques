#include<iostream>
using namespace std;

void SumOfNum(int n){
    int i,sum = 0;
    for(i=1;i<=n;i++){
        sum += i;
    }
    cout << sum;
}

int main(){
    int n;
    cout << "Enter the num till which you have to find the sum: ";
    cin >> n;

    cout << "Sum of " << n << " natural numbers is : ";
    SumOfNum(n);
    return 0;
}

// #include<iostream>
// using namespace std;

// int SumOfNum(int n){
//     int i,sum = 0;
//     for(i=1;i<=n;i++){
//         sum += i;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout << "Enter the num till which you have to find the sum: ";
//     cin >> n;

//     cout << "Sum of " << n << " natural numbers is : " << SumOfNum(n);
//     return 0;
// }