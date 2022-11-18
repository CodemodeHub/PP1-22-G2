#include <iostream>
using namespace std;

// ababa
// l   r
//  l r
//   l
//   r

bool isPalindrome(string s, int l, int r) {
    if(s[l] != s[r]) {
        return false;
    }
    if(l >= r) {
        return true;
    }
    return isPalindrome(s, ++l, --r);
}

int main() {
    string s; cin >> s;
    string result = (isPalindrome(s, 0, s.size() - 1)) ? "YES\n" : "NO\n";
    cout << result;
    return 0;
}