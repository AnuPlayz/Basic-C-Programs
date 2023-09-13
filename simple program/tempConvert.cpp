#include<iostream>

using namespace std;

//C to F
int main(){
    float c,f;
    cout << "Enter the Celsius value to convert : ";
    cin >> c;
    f = ( c * 9/5 ) + 32;
    cout << "Celsius to Fahrenheit : " << f;
}

//F to C
int main(){
    float c,f;
    cout << "Enter the Fahrenheit value to convert : ";
    cin >> f;
    c = ( f - 32 ) * 5/9;
    cout << "Fahrenheit to Celsius : " << c;
}

//Comment the code which you don't want to run because compiling main() 2 times would give error