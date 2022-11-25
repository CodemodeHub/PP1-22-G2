#include <iostream>
#include <map>
using namespace std;

int main(){
  int n; cin >> n;
  map< pair< pair<string, string>, int >, int> m;
  for(int i = 0; i < n; ++i){
    string leftName, rightName;
    int leftNum, rightNum;
    cin >> leftName >> leftNum >> rightName >> rightNum;
    m[make_pair(make_pair(leftName, rightName), leftNum + rightNum)] = leftNum + rightNum;
  }

  map< pair< pair<string, string>, int >, int>::iterator it;
  // it->first = pair< pair<string, string>, int >
  // it->first->first = pair<string, string>
  // it->first->first->first = string
  for(it = m.begin(); it != m.end(); ++it) {
    cout << it->first.first.first << " and " << it->first.first.second << " " << it->second << endl;
  }
}