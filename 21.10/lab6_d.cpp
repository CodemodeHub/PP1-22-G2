#include <iostream>
using namespace std;

void findBook(int n) {
  int arr[n];
  int m;
  for(int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  cin >> m;

  for(int i = 0; i < n; ++i) {
    if(arr[i] == m) {
      cout << "Yes";
      return;
    }
  }
  cout << "No";
}

int main(){
  int n; cin >> n;
  findBook(n);
}