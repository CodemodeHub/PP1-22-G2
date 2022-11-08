#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    int index, value;
    cin >> index >> value;

    v.insert(v.begin() + index, value);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
}