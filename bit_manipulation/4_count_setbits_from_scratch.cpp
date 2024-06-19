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
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Setbit Count: " << setbit_func(n) << endl;
    return 0;
}