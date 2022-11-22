#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    map<int, int> m;

    while(n--) {
        int x; cin >> x;
        m[x]++;
    }
    cout << m[k];
}