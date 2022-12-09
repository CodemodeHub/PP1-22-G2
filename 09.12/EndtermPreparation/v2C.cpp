#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if(n == 0 || n == 1) {
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n; cin >> n;

    vector <int> v;
    for(int i = 1; i <= 100; i++) {
        if(isPrime(i) == true) {
            v.push_back(i);
        }
    }

    vector <int> v2;
    for(int i = 0; i < v.size(); i++) {
        if(isPrime(i + 1) == true) {
            v2.push_back(v[i]);
        }
    }

    cout << v2[n - 1] << endl;

    return 0;
}