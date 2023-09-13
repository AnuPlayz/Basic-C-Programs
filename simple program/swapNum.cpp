//Using a third variable 

#include<iostream>

using namespace std;

int main(){
    int num1, num2, temp;
    cout << "Enter value of num1 & num2 : ";
    cin >> num1 >> num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "after swap num1 : " << num1 << " and num2 : " << num2;
}

//Without using third variable

int main(){
    int num1, num2;
    cout << "Enter value of num1 & num2 : ";
    cin >> num1 >> num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "after swap num1 : " << num1 << " and num2 : " << num2;
}

//Comment the code which you don't want to run because compiling main() 2 times would give error