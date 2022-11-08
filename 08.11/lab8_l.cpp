#include <iostream>
#include <set>

using namespace std;

int main() {
    int n; cin >> n;
    set<int> s;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        s.insert(x);
    }
    
    // 1 1 2 2 3
    // 1 2 3
    // 1 2 3 -> s.size() -> 3

    // 1 1 1 1 1 1 1 1 1 1 3 3 3 3 3
    // 1 3 -> 2

    // 1 2 2 3 3
    // 1 2 3 -> 3

    cout << s.size();
}