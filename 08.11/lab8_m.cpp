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
    
    set <int> :: iterator it;

    int sum = 0;

    for(it = s.begin(); it != s.end(); ++it) {
        sum += *it;
    }

    // for(auto it : s) {
    //     sum += it;
    // }

    cout << sum;
}