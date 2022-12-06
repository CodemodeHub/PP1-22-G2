#include <iostream>
#include <vector>
#include <map>

using namespace std; 

bool comp(pair <string, double>& p1, pair <string, double>& p2) {
    return p1.second > p2.second;
}

int main(){ 
    int n; cin >> n; 
    map <string, double> m; 
    int total = 0; 
    while(n--) { 
        string s; cin >> s; 
        double x; cin >> x; 
        m[s] += x; 
        total += x; 
    } 

    vector <pair <string, double> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << (v[i].second * 100) / total << '%' << endl;
    }
    
    return 0; 
}