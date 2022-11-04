#include <iostream>
using namespace std;

bool isRootOfTwo(int n, int p = 1) {
  if(p == n) {
    return true;
  } else if (p > n) {
    return false;
  }
  isRootOfTwo(n, p * 2);
}

int main() {
  int n; cin >> n;
  string result = (isRootOfTwo(n)) ? "Yes" : "No";
  cout << result;
  return 0;
}