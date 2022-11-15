#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int isOk(int n) {
  if(n % 2 == 0) {
    return n / 2;
  }
  return (n / 2) + 1;
}

int main() {
  int n; cin >> n;
  vector <string> students(n);
  for(int i = 0; i < n; i++) {
    cin >> students[i];
  }

  int m; cin >> m;
  vector <string> inClass(m);
  for(int i = 0; i < m; i++) {
    cin >> inClass[i];
  }

  /*
  5
  Yerassyl Balzhan Nurtileu Symbat Zeinaddin
  3 
  Balzhan Zeinaddin Symbat

  Yerrassyl absent
  Balzhan == Balzhan -> nawli -> break;
  Nurtileu absent
  Symbat == Symbat -> nawli -> break
  */

  vector <string> absent;
  for(int i = 0; i < students.size(); i++) {
    bool flag = false;
    for(int j = 0; j < inClass.size(); j++) {
      if(students[i] == inClass[j]) {
        flag = true;
        break;
      }
    }
    if(flag == false) {
      absent.push_back(students[i]);
    }
  }

  int ok = isOk(n);
  sort(absent.begin(), absent.end());
  cout << "Missed students:" << endl; 
  for(int i = 0; i < absent.size(); i++) {
    cout <<"- " << absent[i] << endl;
  }
  if(ok <= absent.size()) {
    cout << "Alikhan is angry";
  } else {
    cout << "Alikhan is OK";
  }

  return 0;
}