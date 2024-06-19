#include<iostream>
using namespace std;

bool check_if_power(int n) {
    if (n <= 0)
        return false;
    if (n == 1)
        return true;
    if (n % 2 == 0) 
        return check_if_power(n/2);
    return false;
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if (check_if_power(n))
        cout << n << " is a power of 2" << endl;
    else
        cout << n << " is not a power of 2" << endl;
    return 0;
}