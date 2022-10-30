#include <iostream>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int l = 0, r = m - 1;
    while(l <= r) {
        if(a[0][l] != a[0][r]) {
            cout << "NO\n";
            return 0;
        }
        l++;
        r--;
    }

    l = 0, r = m - 1;
    while(l <= r) {
        if(a[n - 1][l] != a[n - 1][r]) {
            cout << "NO\n";
            return 0;
        }
        l++;
        r--;
    }
    cout << "YES\n";

    return 0;
}