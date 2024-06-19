#include<iostream>
using namespace std;

string dec_bin_func(int num) {
    string binary = "";
    if (num == 0)
        return "0";
    while (num > 0) {
        int LSB = num & 1;
        binary = to_string(LSB) + binary;
        num = num >> 1;
    }
    return binary;
}

int main() {
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;
    cout << "Binary Number: " << dec_bin_func(n) << endl;
    return 0;
}