#include <iostream>
using namespace std;

/*
bauka
kaban

Output: bauban
*/

int main() {
    string s, t;
    cin >> s >> t;

    int i = min(s.size(), t.size());
    int cnt = i;

    while(s.substr(s.size() - i, i) != t.substr(0, i)) {
        i--;
        cnt = i;
    }

    int cnt1 = cnt;
    while(cnt1--) {
        s.erase(s.size() - 1, 1);
    }

    while(cnt--) {
        t.erase(0, 1);
    }

    cout << s + t << endl;

    return 0;
}