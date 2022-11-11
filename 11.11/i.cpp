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

  for(int i = 0; i < n; i++) {
    // int max = *max_element(v[i].begin(), v[i].end());
    int max = -1;
    for(int j = 0; j < n; j++) {
      if(v[i][j] > max) {
        max = v[i][j];
      }
    }
    for(int j = 0; j < n; j++) {
      v[i][j] = max;
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}