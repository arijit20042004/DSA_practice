#include<iostream>
using namespace std;

int max_power_func(int n) {
    for (int i=1; i<17; i=i*2)
        n = n | (n >> 1);
    return (n + 1) >> 1;
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Max power of 2 less than or equal to " << n << " is: " << max_power_func(n) << endl;
    return 0;
}