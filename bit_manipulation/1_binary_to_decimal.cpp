#include<iostream>
using namespace std;

int bin_dec_func(int n) {
    string num = to_string(n);
    int len = num.size(), decimal = 0;
    for (int i=0; i<len; i++) {
        decimal = decimal << 1;
        decimal = decimal + (num[i] - '0');
    }
    return decimal;
}

int main() {
    int n;
    cout << "Enter Binary Number: ";
    cin >> n;
    cout << "Decimal Number: " << bin_dec_func(n) << endl;
    return 0;
}