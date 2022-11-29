#include <iostream>
#include <stack>

using namespace std;

int main() {
    string s; cin >> s;

    stack <char> st;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1' && st.empty() == false && st.top() == '1') {
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    string ans = "";
    while(!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }
    cout << ans << endl;

    return 0;
}