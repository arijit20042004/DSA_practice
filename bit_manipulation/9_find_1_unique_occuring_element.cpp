#include<iostream>
#include<vector>
using namespace std;

int find_unique(vector <int> arr, int n) {
    int i, xor_sum = 0;
    for (i=0; i<n; i++)
        xor_sum = xor_sum ^ arr[i];
    return xor_sum;
}

int main() {
    int i, n;
    cout << "Enter Number of Elements: ";
    cin >> n;
    vector <int> arr(n);
    cout << "Enter Elements: ";
    for (i=0; i<n; i++)
        cin >> arr[i];
    cout << "Unique Element: " << find_unique(arr, n) << endl;
    return 0;        
}