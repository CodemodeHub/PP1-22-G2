#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int n; cin >> n;
  int a[n], b[n];
  for(int i = 0; i < n; ++i){
    cin >> a[i];
    b[i] = a[i];
  }

  sort(b, b + n);
  for(int i = 0; i < n; ++i){
    if(a[i] != b[i]) {
      cout << "Not interesting";
      return 0;
    }
  }
  cout << "Interesting" << endl;
}