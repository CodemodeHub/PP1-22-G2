#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k; 
    cin >> n >> k;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++) {
        for(int j = i + 1; j < v.size(); j++) {
            if(v[i] + v[j] == k) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";

    return 0;
}