#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if(n == 0 || n == 1) return false;

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
    for(int i = 0; i < n; i++) {
        if(isPrime(i) == true) {
            v.push_back(i);
        }
    }
    
    for(int i = 0; i < v.size(); i++) {
        for(int j = i + 1; j < v.size(); j++) {
            int sum = v[i] + v[j];
            if(sum == n) {
                cout << v[i] << " " << v[j];
                return 0;
            }
        }
    }

    return 0;
}