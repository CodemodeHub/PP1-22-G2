#include <iostream>
using namespace std;

int reverseInt(int n) {
  int reversed = 0;
  while(n != 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  // n = 123
  // rerevsed = 0 * 10 + 3 => 3
  // reversed = 3 * 10 + 2 => 32
  // reversed = 32 * 10 + 1 => 321
  return reversed;
}

void print(int n) {
  if(n == 0) {
    return;
  }
  cout << n % 10 << " ";
  print(n / 10);
}

int main(){
  int n; cin >> n;
  print(reverseInt(n));
}