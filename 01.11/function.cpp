#include <iostream>

using namespace std;

string greeting(string s) {
    string t = "Hello, " + s;
    return t;
}

void greetingVoid(string s) {
    cout << "Hello, " << s << "\n";
}

int main() {
    string name; cin >> name;

    cout << greeting(name) << endl;
    greetingVoid(name);

    return 0;
}