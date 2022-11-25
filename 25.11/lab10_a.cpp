#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n; cin >> n;
  vector<string> names(n);
  vector<int> numbers(n);

  for(int i = 0; i < n; ++i){
    cin >> names[i];
    cin >> numbers[i];
  }

  sort(names.begin(), names.end());
  sort(numbers.begin(), numbers.end());

  for(int i = 0; i < n; ++i){
    cout << names[i] << " " << numbers[i] << endl;
  }
}