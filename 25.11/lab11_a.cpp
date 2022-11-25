#include <iostream>
#include <map>
using namespace std;

int main(){
  map<string, int> m = {
    { "MON", 1 }, 
    { "TUE", 2 }
  };
  cout << m["MON"];
}