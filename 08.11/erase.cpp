#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    int l, r;
    cin >> l >> r;

    v.erase(v.begin() + l, v.begin() + r);
    // l = 2, r = 4 -> [2, 4) => 2, 3

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
}