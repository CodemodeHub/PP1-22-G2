#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = 0;
    for(int i = 1; i < n - 1; i += 2) {
        if(a[i + 1] - a[i] > max) {
            max = a[i + 1] - a[i];
        }
    }

    for(int i = 1; i < n - 1; i += 2) {
        if(a[i + 1] - a[i] == max) {
            cout << a[i] << " " << max << endl;
        }
    }

    return 0;
}