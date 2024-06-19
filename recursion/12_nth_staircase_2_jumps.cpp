#include<iostream>
using namespace std;

int stair_func(int n) {
    if (n == 2)
        return 2;
    if (n == 1)
        return 1;
    return stair_func(n-1) + stair_func(n-2);
}

int main() {
    int n;
    cout << "Enter Number of Stairs: ";
    cin >> n;
    cout << "Number of cases: " << stair_func(n) << endl;
    return 0;
}