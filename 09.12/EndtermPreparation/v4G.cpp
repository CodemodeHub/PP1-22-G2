#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n], min = 1e9;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(a[i] + a[j] + a[k] < min) {
                    min = a[i] + a[j] + a[k];
                }
            }
        }
    }
    cout << min << endl;

    return 0;
}