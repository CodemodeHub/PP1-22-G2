#include <iostream>
using namespace std;

bool isVowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'y' || c == 'o');
}
int main(){
  int n; cin >> n;
  string ans = "";
  while(n--) {
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i) {
      if(isVowel(s[i])) {
        cnt++;
      }
    }
    ans += s[s.size() - cnt];
  }
  cout << ans;
}