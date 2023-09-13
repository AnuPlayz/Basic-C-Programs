#include<iostream>

using namespace std;

int main(){
    int age1 , age2;
    cout << "Enter age of student 1 and student 2 : ";
    cin >> age1 >> age2;
    if(age1 > age2)
        cout << "Student 1 is elder";
    else if(age1 == age2)
        cout << "Both Students have Equal Age";
    else   
        cout << "Student 2 is elder";
}