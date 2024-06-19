#include<iostream>
using namespace std;

int sum_func(int a, int b) {
    if (a > b) 
        return 0;
    if (a % 2 != 0)
        return a + sum_func(a+2, b);
    else
        return sum_func(a+1, b);
}

int main() {
    int a, b;
    cout << "Enter Range: ";
    cin >> a >> b;
    cout << "Sum: " << sum_func(a, b) << endl;
    return 0;
}