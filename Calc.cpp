#include<iostream>
using namespace std;
int main()
{
    int a, b, res;
    char op;
    cout << "Enter any two number: ";
    cin >> a >> b;
    cout << "Enter Operator ( +,-,/,*): ";
    cin >> op;

    switch(op){
        case '+':
        res = a + b;
        break;

        case '-':
        res = a - b;
        break;

        case '/':
        res = a/b;
        break;

        case '*':
        res = a*b;
        break;

        default:
        cout << "Error! Invalid operator";
    }
    
    cout << "Result: " << res;
    return 0;
}