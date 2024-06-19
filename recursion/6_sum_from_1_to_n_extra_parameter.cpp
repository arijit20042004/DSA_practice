#include<iostream>
using namespace std;

void sum_func(int sum, int n) {
    if (n == 0) {
        cout << "Sum: " << sum << endl;
        return;
    }
    sum_func(sum+n, n-1);
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    sum_func(0, n);
    return 0;
}