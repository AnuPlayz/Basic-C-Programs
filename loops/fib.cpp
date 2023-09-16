#include<iostream>

int main(){
    int i, first = 0, second = 1, third, n;
    std::cout << "Enter Number of fibonacci terms : ";
    std::cin >> n;
    std::cout << first << " " << second << ' ';
    for(i=2; i<n; i++){
        third = first + second;
        std::cout << third << " ";
        first = second;
        second = third;
    }
}