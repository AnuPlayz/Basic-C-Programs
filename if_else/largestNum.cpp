#include<iostream>

using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter three numbers : ";
    cin >> num1 >> num2 >> num3;
    if(num1==num2 && num2==num3)
        cout << "All numbers are equal";
    else if(num1 >= num2 && num1 >= num3)
        cout << "Number 1 is the greatest " << num1;
    else if(num2 >= num1 && num2 >= num3)
        cout << "Number 2 is the greatest " << num2;
    else
        cout << "Number 3 is the greatest " << num3;
}
