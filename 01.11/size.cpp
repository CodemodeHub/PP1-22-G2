// 123 -> 3
/*
123 
1 + size(12) -> size(12) = 2
    1 + size(1) -> size(1) = 1
        1 + size(0) -> size(0) = 0
*/

#include <iostream>

using namespace std;

int size(int n) {
    if(n < 1) {
        return 0;
    }
    return 1 + size(n / 10);
}

int main() {
    int n; cin >> n;

    cout << size(n) << endl;

    return 0;
}