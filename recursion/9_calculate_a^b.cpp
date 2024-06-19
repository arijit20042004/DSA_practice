#include<iostream>
using namespace std;

int exp_func(int a, int b) {
    if (b == 0)
        return 1;
    return a * exp_func(a, b-1);
}

int main() {
    int a, b;
    cout << "Enter Numbers: ";
    cin >> a >> b;
    cout << "Exponent Value: " << exp_func(a, b) << endl;
    return 0;
}