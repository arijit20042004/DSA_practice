#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print_vector(vector <int> v, int n) {
    for (int i=0; i<n; i++)
        cout << v[i] << " ";
    cout << endl;
}

//vector that is passed by values: void print_vector(vector <int> v, int n)
//vector that is passed by address: void print_vector(vector <int> &v, int n)

bool compare_descending(int a, int b) {
    return a > b;
}

int main() {
    vector <int> v;

    v.push_back(2);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(1);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(4);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    print_vector(v, v.size());

    v.pop_back();                                   //doesn't take any parameters, removes the last element
    print_vector(v, v.size());


    vector <int> v1(5);                             //intial size of vector: 5, each element has value 0
    vector <int> v2(5, 7);                          //intital size of vector: 5, each element has value 7

    // 'at'
    cout << v[1] << endl;
    cout << v.at(1) << endl;                         //same as v[index]
    
    //sort
    sort(v.begin(), v.end());                       //ascending
    print_vector(v, v.size());
    sort(v.begin(), v.end(), compare_descending);   //descending
    print_vector(v, v.size());

    return 0;
}