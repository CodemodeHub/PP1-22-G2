#include <iostream>

using namespace std;

string s;
string toBin(int n) {
    if(n == 0) {
        return s;
    }
    s = char((n % 2) + 48) + s;
    return toBin(n / 2);
}

int main() {
    int n; cin >> n;
    
    cout << toBin(n) << endl;

    return 0;
}