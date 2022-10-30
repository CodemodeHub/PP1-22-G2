#include <iostream>

using namespace std;

int main() {
    int n; cin >> n; 
    int a[n][n];
    int max = -1e9;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] == max) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";

    return 0;
}