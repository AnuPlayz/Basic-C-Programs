#include<iostream>

using namespace std;

int main(){
    float physics, chemistry, maths, cs, english, avg;
    cout << "Enter marks in order : Physics , Chemistry , Maths , CS , English :";
    cin >> physics >> chemistry >> maths >> cs >> english;
    avg = ( physics + chemistry + maths + cs + english ) / 5;
    cout << avg;
}