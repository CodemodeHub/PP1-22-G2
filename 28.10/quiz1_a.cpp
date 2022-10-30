#include <iostream>

using namespace std;

// prev 1 7 9
// prev = 1
// cin >> n; n = 7; prev = 1
// 7 > 1 cnt++ prev = 7

int main() {
    int n, cnt = 0;
    int prev = -1000000001;
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        if(prev < n) {
            cnt++;
        }
        prev = n;
    }
    cout << cnt - 1 << "\n";

    return 0;
}