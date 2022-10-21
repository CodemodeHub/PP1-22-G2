#include <iostream>
using namespace std;

bool validString(string s, int n) {
  int cnt = 0;
  for(int i = 0; i < s.size(); ++i) {
    if(s[i] >= '0' && s[i] <= '9') {
      cnt++;
    }
  }
  return cnt >= n ? true : false;
}

int main(){
  string s; cin >> s;
  int n; cin >> n;
  bool ok = validString(s, n);
  cout << (ok == true ? "YES" : "NO");
}