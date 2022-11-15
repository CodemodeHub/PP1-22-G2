#include <iostream>
using namespace std;

int sumArray(int a[], int n) {
  int sum = 0;
  for(int i = 0; i < n; ++i){
    sum += a[i];
  }
  return sum;
}

void solve() {
  int n, m;
  cin >> n >> m;
  int arr[n][m];
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> arr[i][j];
    }
  }

  int q; cin >> q;
  while(q--){
    int ans = 0;
    int x; cin >> x;
    for(int i = 0; i < n; ++i){
      int rowSum = sumArray(arr[i], m);
      if(rowSum >= x) {
        ans++;
      } 
    }
    cout << ans << endl;
  }
}

int main(){
  solve();
}