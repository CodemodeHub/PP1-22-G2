#include <iostream>
using namespace std; 

int square(int a) {
  return a * a;
}

int main(){
  int n = 5;
  cin >> n;
  n = square(n);
  cout << n;
}