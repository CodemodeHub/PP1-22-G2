#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    if(n == 0) {
        cout << "Ne chetko\n";
    } else {
        for(int i = 1; i < 2 * n; i += 2) {
            for(int j = 0; j < n; j++) {
                cout << i << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}