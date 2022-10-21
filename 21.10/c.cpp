#include <iostream>
using namespace std;

// FIO: fname lname

void printFullName(string f = "Familia", string l = "Name") {
  cout << "FIO: " << f << " " << l << endl;
}

void printSum(int a = 5, int b = 10) {
  cout << a + b << endl;
}

int main(){
  string fname, lname;
  cin >> fname >> lname;
  printFullName();
  printSum();
}