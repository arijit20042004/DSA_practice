//applicable in all scenarios

#include<iostream>
using namespace std;

int exp_func(int a, int b) {
    if (b == 1)
        return a;
    if (b % 2 == 0)
        return exp_func(a, b/2) * exp_func(a, b/2);
    else
        return a * exp_func(a, b/2) * exp_func(a, b/2);
}

int main() {
    int a, b;
    cout << "Enter Numbers: ";
    cin >> a >> b;
    cout << "Exponent Value: " << exp_func(a, b) << endl;
    return 0;
}