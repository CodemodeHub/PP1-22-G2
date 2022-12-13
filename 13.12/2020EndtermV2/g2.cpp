#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> merge(vector<int> &a, vector<int> &b) {
    vector <int> res;
    int l = 0, r = 0;
    while(l < a.size() && r < b.size()) {
        if(a[l] >= b[r]) {
            res.push_back(b[r]);
            r++;
        } else {
            res.push_back(a[l]);
            l++;
        }
    }
    while(l < a.size()) {
        res.push_back(a[l]);
        l++;
    }
    while(r < b.size()) {
        res.push_back(b[r]);
        r++;
    }
    return res;
}

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

    vector <int> v = merge(a, b);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}