#include <iostream>

using namespace std;

// GCD - Greatest Common Divisor

// GCD(2, 8)
// 2 % 8 == 2
// GCD(8, 2)
// 8 % 2 == 0
// GCD(2, 0) -> b = 0 -> exit()

int GCD(int a, int b) {
    if(b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    // cout << a % b << "\n";

    cout << GCD(a, b) << endl;

    return 0;
}