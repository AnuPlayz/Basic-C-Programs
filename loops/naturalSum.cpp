#include<iostream>

int main(){
    int n, i, sum=0;
    std::cin >> n;
    for ( i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    std::cout << sum;
}