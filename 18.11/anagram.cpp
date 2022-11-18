#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if(s.size() == t.size()) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        cout << "NO\n";
    }

    return 0;
}