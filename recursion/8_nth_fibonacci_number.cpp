#include<iostream>
using namespace std;

int fibo_func(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibo_func(n-1) + fibo_func(n-2);
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Fibonacci Number: " << fibo_func(n) << endl;
    return 0;
}