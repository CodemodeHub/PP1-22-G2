#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n; cin >> n;
    vector <string> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map <string, vector <string> > pm;
    int m; cin >> m;
    while(m--) {
        string a, b;
        cin >> a >> b;

        // добавь элемент в вектор по моему ключу
        pm[a].push_back(b);
        pm[b].push_back(a);
    }

    string s; cin >> s;
    vector <string> res = pm[s];
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}