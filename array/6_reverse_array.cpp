#include<iostream>
#include<vector>
using namespace std;

void rev_func(vector <int> &v, int n) {
    int left = 0;
    int right = v.size() - 1;
    while (left < right) {
        int temp = v[left];
        v[left] = v[right];
        v[right] = temp;
        left++;
        right--;
    }
}

void print_vector(vector <int> v, int n) {
    for (int i=0; i<n; i++)
        cout << v[i] << " ";
    cout << endl;
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
    cout << "Original Array: ";
    print_vector(v, v.size());
    rev_func(v, v.size());
    cout << "New Array: ";
    print_vector(v, v.size());
    return 0;
}