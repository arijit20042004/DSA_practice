#include<iostream>
#include<vector>
using namespace std;

void two_sum_func(vector <int> v, int n, int sum) {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (v[i] + v[j] == sum)
                cout << "(" << i << " ," << j << ")" << endl;
        }
    }
}

int main() {
    int i, num, input, sum;
    cout << "Enter Number of Elements: ";
    cin >> num;
    vector <int> v;
    cout << "Enter Elements: ";
    for (i=0; i<num; i++) {
        cin >> input;
        v.push_back(input);
    }
    cout << "Enter Sum: ";
    cin >> sum;
    cout << "Two Sum Doublets: " << endl;
    two_sum_func(v, num, sum);
    return 0;
}