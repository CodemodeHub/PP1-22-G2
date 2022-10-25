#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n][n];
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      arr[i][j] = 0;
    }
  }

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      if(i + j == n - 1) {
        arr[i][j] = 1;
      }
      arr[n - 1][j] = 1;
      arr[i][n - 1] = 1;
    }
  }

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}