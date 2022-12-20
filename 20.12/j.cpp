#include <iostream>
#include <deque>
using namespace std;

/*
abcde
deabc

Output: 2

1) eabcd
2) deabc 
*/

int main() {
    string s, t;
    cin >> s >> t;

    int cnt = 0;
    while(s != t) {
        if(cnt == t.size()) {
            cout << "Understandable have a nice day";
            return 0;
        }
        cnt++;
        rotate(s.begin(), s.begin() + cnt, s.end());
    }
    cout << cnt << endl;

    return 0;
}