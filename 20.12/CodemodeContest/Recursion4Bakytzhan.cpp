#include <iostream>
#include <algorithm>
using namespace std;

string recursion(string s, int i = 0) {
    if(i == s.size()) {
        return s;
    }
    if(s[i] == '(') {
        s[i] = ')';
    }
    return recursion(s, ++i);
}

int main() {
    string s; cin >> s;

    string t = recursion(s);
    reverse(t.begin(), t.end());

    cout << s + t << endl;

    return 0;
}