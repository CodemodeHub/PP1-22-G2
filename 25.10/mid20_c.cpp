#include <iostream>
#include <algorithm>

using namespace std;

// global variable
int was[1001];

int main() {
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++) {
    was[a[i]]++;
  }

  int mx = *max_element(was, was + 1001);
  for(int i = 1000; i >= 0; i--) {
    if(was[i] == mx) {
      cout << i << " ";
    }
  }

  return 0;
}