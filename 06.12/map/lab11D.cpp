#include <iostream>
#include <vector>

using namespace std;

bool step(int i, int j, vector <vector <int> > v) {
    if(v[i][j] == 0 && v[i + 1][j] == 0 && v[i][j + 1] == 0 && v[i + 1][j + 1] == 0) {
        return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector <vector <int> > v;
    for(int i = 0; i < n; i++) {
        vector <int> tmp;
        for(int j = 0; j < m; j++) {
            int x; cin >> x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }

    bool flag = true;
    for(int i = 0; i < v.size() - 1; i++) {
        for(int j = 0; j < v[i].size() - 1; j++) {
            if(step(i, j, v) == false) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

    return 0;
}