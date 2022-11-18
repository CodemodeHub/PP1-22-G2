#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    string str = "";
    for(int i = 0; i < s.size(); i++) {
        if(i == s.size() - 1) {
            str += s[i];
        } else {
            str += s[i];
            str += '*';
        }
        cout << str << "\n";
    }
    cout << str << "\n";

    return 0;
}