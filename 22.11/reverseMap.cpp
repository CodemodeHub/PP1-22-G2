#include <iostream>
#include <map>

using namespace std;

int main() {
    int n; cin >> n;
    map<int, int> m;

    while(n--) {
        int x; cin >> x;
        m[x]++;
    }

    map<int, int>::reverse_iterator it;

    for(it = m.rbegin(); it != m.rend(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
}