#include <iostream>
using namespace std;

bool isPrime(int x) {
    if(x < 2) { return false; }
    for(int i = 2; i < x; ++i) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int sum = 0;
    for(int i = 0; i < 3; i++) {
        int n; cin >> n;
        if(isPrime(n)) {
            sum += n;
        }
    }
    cout << sum << endl;
    cout << (isPrime(sum) == true ? "Yes" : "No");
}