#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool isCheater(int arr[], int n, int k, int i = 0) {
  if(i == n - 1) {
    return false;
  }
  if(abs(arr[i] - arr[i + 1]) <= k) {
    return true;
  }
  isCheater(arr, n, k, ++i);
}

int main(){
  int n, k;
  cin >> n >> k;
  int arr[n];
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  sort(arr, arr + n);

  cout << (isCheater(arr, n, k) ? "cheater" : "no");
}