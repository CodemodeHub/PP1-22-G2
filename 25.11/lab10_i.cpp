#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> originalVector(n);
  vector<int> reversedVector(n);
  for(int i = 0; i < n; ++i){
    int x; cin >> x;
    originalVector[i] = x;
    reversedVector[i] = x;
  }

  reverse(reversedVector.begin(), reversedVector.end());

  for(int i = 0; i < n; ++i){ 
    if(originalVector[i] != reversedVector[i]) {
      cout << "Instead of " <<  originalVector[i] << " here was " << reversedVector[i] << endl;
    } else {
      cout << "OK" << endl;
    }
  }
}