#include <iostream>

using namespace std;

void read(int ** arr, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
}

void print(int ** arr, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int ** arr;
    arr = new int*[n];
    for(int i = 0; i < n; i++) {
        arr[i] = new int [m];
    }
    read(arr, n, m);
    print(arr, n, m);

    return 0;
}