#include <iostream>
using namespace std;

int sumOfDigits(string s, int ans = 0, int i = 0) {
  if(s.size() == i + 1) {
    return ans;
  }
  ans += int(s[i] - '0');
  return sumOfDigits(s, ans, i++);
}

int main(){
  string s; cin >> s;
  cout << sumOfDigits(s);
}