#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<int> > v;
  for(int i = 0; i < n; i++) {
    vector <int> tmp;
    for(int j = 0; j < n; j++) {
      int x; cin >> x;
      tmp.push_back(x);
    }
    v.push_back(tmp);
  }

  int max = -1;
  for(int i = 0; i < n; i++) {
    int maxRow = *max_element(v[i].begin(), v[i].end());
    if(max < maxRow) {
      max = maxRow;
    }
  }
  cout << max << endl;

  return 0;
}