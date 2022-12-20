#include <iostream>
using namespace std;

int main() {
    string s = "abcde";

    /*
    left shift = rotate(s.begin(), s.begin() + 1, s.end());
    right shift = rotate(s.begin(), s.end() - 1, s.end());
    */

    rotate(s.begin(), s.end() - 1, s.end());
    cout << s << endl;

    return 0;
}