#include<iostream>

using namespace std;

int main(){
    int year;
    cout << "Enter the year : ";
    cin >> year;
    if( year%4 == 0)
        cout << "Year : " << year << " is a leap year";
    else    
        cout << "Year : " << year << " is not a leap year";
}