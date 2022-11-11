#include <iostream>
using namespace std;

int main() {
  int q; cin >> q;
  while(q--) {
    int x; cin >> x;
    while(x % 10 == 0) {
      x /= 10;
    }
    cout << x << endl;
  }
}