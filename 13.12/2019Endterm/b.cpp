#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    int cnt = 0;
    if (s.size() % 2 != 0) {
        cout << "-1\n";
        return 0;
    } else {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                cnt++;
            }
        }

        if (cnt == s.size() / 2) {
            cout << 0 << endl;
        } else if (cnt < s.size() / 2) {
            cout << s.size() / 2 - cnt << endl;
        } else if (cnt > s.size() / 2) {
            cout << (cnt - s.size() / 2) * 2 << endl;
        }
    }

    return 0;
}