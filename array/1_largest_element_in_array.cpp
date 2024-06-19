#include<iostream>
#include<climits>
using namespace std;

int max_func(int arr[], int n) {
    int max = INT_MIN;
    for (int i=0; i<n; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int main() {
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Element Values: ";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    int max = max_func(arr, n);
    cout << "Maximum Value: " << max;
    return 0;
}