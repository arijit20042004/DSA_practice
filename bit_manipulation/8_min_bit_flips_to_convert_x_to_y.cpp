#include<iostream>
using namespace std;

int setbit_func(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main() {
    int x, y;
    cout << "Enter Numbers: ";
    cin >> x >> y;
    cout << "Minimum bit flips: " << setbit_func(x ^ y) << endl;
    return 0;
}