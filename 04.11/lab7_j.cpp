#include <iostream>
using namespace std;

int solve(int n, int sum = 0) {
  if(n == 0) {
    return sum;
  } 
  sum += (n % 10) / 2;
  return solve(n / 10, sum);
}

int main() {
  int n; cin >> n;
  cout << solve(n);
  return 0;
}