#include <iostream>
using namespace std;

int solve(int sum = 0) {
  int n; cin >> n;
  if(n == 0) {
    return sum;
  }
  sum += n;
  return solve(sum);
}

int main() {
  cout << solve();
  return 0;
}