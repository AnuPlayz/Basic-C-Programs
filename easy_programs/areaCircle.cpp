#include<iostream>

using namespace std;

int main(){
    float pi = 3.14, area;
    int radius;
    cout << "Enter radius of circle : ";
    cin >> radius;
    area = pi * radius * radius;
    cout << "Area of the circle is " << area;
}