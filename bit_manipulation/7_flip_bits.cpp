#include<iostream>
using namespace std;

//for example, if 11001 enters function as n, 11111 is returned
int func(int n) {
    for (int i=1; i<17; i=i*2)
        n = n | (n >> 1);
    return n;
}

int main() {
    int n, result;
    cout << "Enter Number: ";
    cin >> n;
    result = n ^ func(n);
    cout << "Number with flipped bits: " << result << endl;
    return 0;
}