#include<iostream>
#include<vector>
using namespace std;

int main() {
    int i, num, input, search, index = -1;
    cout << "Enter Number of Elements: ";
    cin >> num;
    vector <int> v;
    cout << "Enter Elements: ";
    for (i=0; i<num; i++) {
        cin >> input;
        v.push_back(input);
    }
    cout << "Enter Number to be Searched: ";
    cin >> search;
    for (i=num-1; i>=0; i--) {
        if (v.at(i) == search) {
            index = i;
            break;
        }
    }
    if (index == -1)
        cout << "Number Not Found" << endl;
    else
        cout << "Index: " << index << endl;
    return 0;
}