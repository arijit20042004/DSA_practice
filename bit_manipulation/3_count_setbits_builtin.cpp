#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Setbit Count: " << __builtin_popcount(n) << endl;
    return 0;
}