#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m; cin >> m;
    vector <int> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector <int> v;
    for(int i = 0; i < a.size(); i++) {
        v.push_back(a[i]);
    }
    for(int i = 0; i < b.size(); i++) {
        v.push_back(b[i]);
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}