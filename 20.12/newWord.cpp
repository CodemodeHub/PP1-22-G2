#include <iostream>
using namespace std;

/*
1) boriska, karamelka
Output: boriskaramelka

2) car, dog
Output: cardog

3) car, car
Output: car
*/

int main() {
    string s, t;
    cin >> s >> t;

    int i = min(s.size(), t.size());
    // cout << i << endl;
    int cnt = i;

    while(s.substr(s.size() - i, i) != t.substr(0, i)) {
        // cout << i << " :\n";
        // cout << s.substr(s.size() - i, i) << " " << t.substr(0, i) << endl;
        i--;
        cnt = i;
    }

    while(cnt--) {
        // cout << t << "\n";
        t.erase(0, 1);
    }

    cout << s + t << endl;

    return 0;
}