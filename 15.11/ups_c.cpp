#include <iostream>
using namespace std;

int samuraize(int l, int r, int sum = 0) {
  if(l - 1 == r) {
    return sum; 
  } 
  return samuraize(++l, r, sum += l);
}

// l = 3, r = 6
// 1) l = 4, sum = 3
// 2) l = 5, sum = 7
// 3) l = 6, sum = 12
// 4) l = 7, sum = 18
// 7 - 1 == 6 => sum => 18

int main(){
  int l, r; cin >> l >> r;
  cout << samuraize(l, r);
}