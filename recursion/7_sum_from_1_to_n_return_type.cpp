#include<iostream>
using namespace std;

int sum_func(int n) {
    if (n == 0)
        return 0;
    return n + sum_func(n-1);
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Sum: " << sum_func(n) << endl;
    return 0;
}