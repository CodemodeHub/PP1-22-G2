#include <iostream>
using namespace std;

void print(string text) {
  cout << text << endl;
}

string getPrint(string myText) {
  return myText;
}

int main(){
  print("Nura");

  string s = getPrint("HEllo");
}