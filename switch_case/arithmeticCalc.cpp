#include<iostream>

using namespace std;

int main(){
    int num1 , num2, choice, flag = 1;
    cout << "Enter Number 1 and Number 2 : ";
    cin >> num1 >> num2;

    while(flag){
        cout << "\n\nChoose an arithmetic operation:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice){
            case 1:
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case 2:
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case 3:
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case 4:
                cout << num1 << " / " << num2 << " = " << num1 / num2;
                break;
            case 5:
                cout << num1 << " % " << num2 << " = " << num1 % num2;
                break;
            case 6:
                flag = 0;
                break;
            default:
                cout << "Enter a valid option!"; 
                break;
        }
    }
}