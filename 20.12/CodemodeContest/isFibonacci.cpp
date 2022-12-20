#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int a[1001];
    a[0] = 1, a[1] = 1;
    for(int i = 2; i < 1001; i++) {
        a[i] = a[i - 1] + a[i - 2];
        if(n == a[i]) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";

    return 0;
}