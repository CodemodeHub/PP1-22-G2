#include <iostream>
#include <set>
using namespace std;

bool check(int n) {
    set <int> s;
    int cnt = 0;
    while(n > 0) {
        s.insert(n % 10);
        cnt++;
        n /= 10;
    }
    return s.size() == cnt;
}

int main() {
    int l, r;
    cin >> l >> r;
    int ans = 0;
    bool flag = false;
    for(int i = l; i <= r; i ++) {
        if(check(i) == true) {
            ans = i;
            flag = true;
            break;
        }
    }
    
    if(flag) {
        cout << ans << endl;
    } else {
        cout << "Understandable, have a great day" << endl;
    }

    return 0;
}