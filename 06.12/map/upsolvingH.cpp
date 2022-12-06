#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

float getQuality(float p, float q) {
    return p / q;
}

bool comp(pair <string, float>& p1, pair <string, float>& p2) {
    return p1.second < p2.second;
}

int main() {
    int n; cin >> n;

    map <string, float> m;
    for(int i = 0; i < n; i++) {
        string name;
        float p, q;
        cin >> name >> p >> q;
        m[name] = getQuality(p, q);
    }

    vector <pair <string, float> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);
    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i].first << " " << v[i].second << "\n";
    // }
    cout << v[0].first << endl;

    return 0;
}