#include <iostream>
#include <map>

using namespace std;
int main () {
    map<string, int> nameAndAge;

    int n; cin >> n;
    // 4 => true
    // 3 => true
    // 2 => true
    // 1 => true
    // 0 => false
    while(n--) {
        string name;
        cin >> name;
        int age;
        cin >> age;

        // 1
        // nameAndAge.insert(make_pair(name, age));

        // 2
        nameAndAge[name] = age;
    }

    map<string, int>:: iterator it;

    for(it = nameAndAge.begin(); it != nameAndAge.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
}