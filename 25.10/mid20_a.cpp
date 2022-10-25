#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  if(n == 1) {
    cout << 0 << endl;
    return 0;
  }

  int mX = *max_element(a, a + n);
  int mI = *min_element(a, a + n);

  cout << mX - mI - 1 - (n - 2) << endl;

  return 0;
}