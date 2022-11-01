#include <iostream>

using namespace std;

void add(int a[], int n) {
    for(int i = 0; i < n; i++) {
        a[i]++;
    }
}

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    add(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}