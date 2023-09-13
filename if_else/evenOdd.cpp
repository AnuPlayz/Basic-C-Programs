#include<iostream>

using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if( num%2 == 0 )
        cout << "Number " << num << " is even";
    else
        cout << "Number " << num << " is odd";
}