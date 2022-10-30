#include <iostream>
using namespace std;

void printLight(string first, string second, string third) {
  cout << first << endl << second << endl << third;
}

int main(){
  string f, s, t;
  cin >> f >> s >> t;

  if(f == "black") {
    if(s == "black") {
      if(t == "green") {
        printLight("black", "black", "GREEN");
      } else if(t == "GREEN") {
        printLight("black", "yellow", "black");
      } else {
        cout << "error";
        return 0; 
      }
    } else if(s == "yellow") {
      if(t == "black") {
        printLight("red", "black", "black");
      } else {
        cout << "error";
        return 0;
      }
    } else if(s == "YELLOW") {
      if(t == "black") {
        printLight("black", "YELLOW", "black");
      } else {
        cout << "error";
        return 0;
      }
    } else {
      cout << "error";
      return 0;
    }
  } else if(f == "red") {
    if(s == "yellow") {
      if(t == "black") {
        printLight("black", "black", "green");
      } else {
        cout << "error";
        return 0;
      }
    } else if(s == "black") {
      if(t == "black") {
        printLight("red", "yellow", "black");  
      } else {
        cout << "error";
        return 0;
      }
    } else {
      cout << "error";
      return 0;
    }
  } else {
    cout << "error";
    return 0;
  }
}