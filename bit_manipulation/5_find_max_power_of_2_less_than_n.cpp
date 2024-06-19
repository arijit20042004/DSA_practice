#include<iostream>
using namespace std;

int max_power_func(int n) {
    while ((n & (n-1)) > 0)
        n = n & (n-1);
    return n;
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Max power of 2 less than or equal to " << n << " is: " << max_power_func(n) << endl;
    return 0;
}