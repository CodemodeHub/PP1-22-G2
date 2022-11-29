#include <iostream>
#include <stack>

using namespace std;

int main() {
    string s;
    cin >> s;

    stack <char> st;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            st.push(s[i]);
        } else if(s[i] == ')') {
            if(st.empty() == false && st.top() == '(') {
                st.pop();
            } else {
                st.push(s[i]);
            }   
        }
    }

    if(st.empty() == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}