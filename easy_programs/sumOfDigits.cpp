#include<iostream>

using namespace std;

int main(){
    int num, lastDigit, sum=0;
    cout << "Enter a number : ";
    cin >> num;
    while(num!=0){
        lastDigit = num%10;
        sum = sum + lastDigit;
        num = num/10;
    }
    cout << "Addition of the digit of the numbers is : " << sum;
}