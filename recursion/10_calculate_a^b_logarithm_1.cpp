//condition: the power has to be of the form 2^x, for e.g. 2, 4, 8, 16, ...

#include<iostream>
using namespace std;

int exp_func(int a, int b) {
    if (b == 1)
        return a;
    int value = exp_func(a, b/2);
    return value*value;
}

int main() {
    int a, b;
    cout << "Enter Numbers: ";
    cin >> a >> b;
    cout << "Exponent Value: " << exp_func(a, b) << endl;
    return 0;
}