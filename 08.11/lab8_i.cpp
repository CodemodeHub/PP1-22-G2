#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    int k; cin >> k;

    vector<int>::iterator it;

    it = find(v.begin(), v.end(), k);

    if(it != v.end()) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}