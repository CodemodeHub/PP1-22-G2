#include <iostream>
using namespace std;

char solve(string s, int i = 0, char max = '0') {
  if (i == s.size()) {
    return max;
  }
  if (max < s[i]) {
    max = s[i];
  }
  return solve(s, ++i, max);
} 

int main() {
  string s; cin >> s;
  cout << solve(s);
  return 0;
}