#include<iostream>
using namespace std;

void pre_in_post_func(int n) {
    if (n == 0)
        return;
    cout << "Pre " << n << endl;
    pre_in_post_func(n-1);
    cout << "In " << n << endl;
    pre_in_post_func(n-1);
    cout << "Post " << n << endl;
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    pre_in_post_func(n);
    return 0;
}