#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(vector <int> &v) {
    int l = 0, r = v.size() - 1;
    while(l <= r) {
        if(v[l] != v[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector <int> > v;
    for(int i = 0; i < n; i++) {
        vector <int> tmp;
        for(int j = 0; j < m; j++) {
            int x; cin >> x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }

    vector <int> first = v[0];
    vector <int> last = v[n - 1];

    if(isPalindrome(first) == true && isPalindrome(last) == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}