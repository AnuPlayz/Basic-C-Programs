#include<iostream>

using namespace std;

int main(){
    char a;
    cout << "Enter a character : ";
    cin >> a;

    if( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
        cout << "Character " << a << " is a vovel";
    else    
        cout << "Character " << a << " is a consonant";
}