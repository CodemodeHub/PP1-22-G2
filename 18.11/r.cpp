/*
39 -> 1
39 / 3 = 13
13 - 1 = 12
12 / 2 = 6
6 / 2 = 3
3 / 3 = 1

59 -> 1
59 - 1 = 58
58 / 2 = 29
29 - 1 = 28
28 / 2 = 14
14 / 2 = 7
7 - 1 = 6
6 / 2 = 3
3 / 3 = 1
*/
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;
    while(n > 1) {
        // cout << n << "\n";
        if(n % 2 == 0) {
            n /= 2;
        } else if(n % 3 == 0) {
            n /= 3;
        } else {
            n -= 1;
        }
        cnt++;
    }
    cout << cnt << "\n";

    return 0;
}