#include <iostream>
#include <vector>
#include <algorithm>
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

vector<int> res;
vector<int> check(int l, int r) {
  if(l == r) {
    return res;
  }
  string s = to_string(l);
  bool isOk = true;
  for(int i = 0; i < s.size(); i++) {
    if((s[i] - '0') % 2 == 0 && i % 2 == 0) {
      continue;
    }
    else if(isPrime((s[i] - '0')) && i % 2 == 1) {
      continue;
    } else {
      isOk = false;
    }
  }
  if(isOk) {
    res.push_back(l);
  }
  return check(++l, r);
}

int main() {
  int l, r; 
  cin >> l >> r;
  vector <int> v = check(l, r);
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}