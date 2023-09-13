#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "Enter two numbers to compare : ";
    cin >> num1 >> num2;
    if ( num1 > num2 )
        cout << "Num 1 is greater than Num 2";
    else
        cout << "Num 2 is greater than Num 1";
}