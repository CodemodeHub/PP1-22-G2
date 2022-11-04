#include <iostream>
using namespace std;

int sumOfDigits(string s, int i = 0, int sum = 0) {
  if(i == s.size()) {
    return sum;
  }
  sum += int(s[i] - '0');
  return sumOfDigits(s, ++i, sum);
}

int main() {
  string n; cin >> n;
  cout << sumOfDigits(n);
  return 0;
}