#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n; cin >> n;
  set<int> first, second;
  int k;
  while(cin >> k) {
    if(k == 0) {
      break;
    }
    first.insert(k);
  }
  int m;
  while(cin >> m) {
    if(m == 0) {
      break;
    }
    second.insert(m);
  }
  
  for(auto i : first) {
    for(auto j : second) {
      if(i == j) {
        cout << i << " ";
      }
    }
  }
  cout << endl;

  vector<int> v;
  for(int i = 1; i <= n; ++i) {
    cout << *first.find(i) << " " << *second.find(i) << endl;
    if(*first.find(i) == -1 && *second.find(i) == -1) {
      v.push_back(i);
      cout << i << ' ';
    }
  }
  cout << endl;
  for(auto i : v) {
    cout << i << " ";
  }
}