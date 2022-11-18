// abc1fds321
// 1 + 321 = 322
// stoi - string to integer "123" -> 123
// atoi - integer to string 123 -> "123"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; cin >> s;
    int sum = 0;
    string t = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            t += s[i];
        } else {
            if(t.size() != 0) {
                sum += stoi(t);
            }
            t = "";
        }
    }
    if(t.size() != 0) {
        sum += stoi(t);
    }
    cout << sum << "\n";

    return 0;
}