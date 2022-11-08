#include <iostream>
#include <vector>

using namespace std;

int main() {
    // vector <int> v;

    // int n; cin >> n;

    // // First method
    // for(int i = 0; i < n; ++i) {
    //     int x; cin >> x;
    //     v.push_back(x);
    // }

    // Second method
    int n; cin >> n;
    vector <int> v(n);
    
    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }
    
    v.push_back(10);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
}