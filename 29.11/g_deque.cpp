#include <iostream>
#include <deque>

using namespace std;

int main() {
    string s; cin >> s;
    deque <char> d;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1' && d.empty() == false && d.back() == '1') {
            d.pop_back();
        } else {
            d.push_back(s[i]);
        }
    }

    while(!d.empty()) {
        cout << d.front();
        d.pop_front();
    }

    return 0;
}