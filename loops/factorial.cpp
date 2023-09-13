#include <iostream>
using namespace std;

int main() {
    int temp, num, factorial = 1;
    cout << "Enter number : ";
    cin >> num;
    temp = num;
    while(temp!=0){
        factorial = factorial * temp;
        temp--;
    }
    cout << "Factorial of " << num << " is " << factorial;
}
