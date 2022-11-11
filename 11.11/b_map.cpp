#include <iostream>
using namespace std;

int arr[101][101];

int main(){
  int n, m, k; cin >> n >> m >> k;

  for(int row = 0; row < k; ++row){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1; i < x2; ++i) {
      for(int j = y1; j < y2; ++j){
        arr[i][j]++;
      }
    }
  }

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}