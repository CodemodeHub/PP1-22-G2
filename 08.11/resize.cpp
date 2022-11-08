#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    int newSize;
    cin >> newSize;
    v.resize(newSize);
    // 1 2 3 4 5
    // newSize = 3
    // 1 2 3
    // newSize = 10
    // 1 2 3 4 5 0 0 0 0 0

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }

}