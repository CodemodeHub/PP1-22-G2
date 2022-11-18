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

    // increasing
    sort(v.begin(), v.begin() + k - 1);

    // decreasing
    sort(v.begin() + k, v.end());
    reverse(v.begin() + k, v.end());

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}