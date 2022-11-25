#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// bool comp(pair<int, int> left, pair<int, int> right) {
//   if(left.first == right.first) {
//     return left.second < right.second;
//   } else {
//     return left.first < right.first;
//   }
// }

int main(){
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for(int i = 0; i < n; ++i){
    int left, right;
    cin >> left >> right;
    v[i] = make_pair(left, right);
  }

  sort(v.begin(), v.end());
  for(int i = 0; i < v.size(); ++i){
      cout << v[i].first << " " << v[i].second << endl;
  }
}