#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    int l, r;
    cin >> l >> r;

    reverse(v.begin() + l, v.begin() + r + 1);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
}