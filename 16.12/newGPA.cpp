#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

bool comp(pair<pair <string, string>, double> &p1, pair<pair <string, string>, double> &p2) {
    if(p1.second == p2.second) {
        if(p1.first.first == p2.first.first) {
            return p1.first.second < p2.first.second;
        }
        return p1.first.first < p2.first.first;
    }
    return p1.second < p2.second;
}

double score(string mark, int credits) {
    if(mark == "A+") return credits * 4.00;
    if(mark == "A") return credits * 3.75;
    if(mark == "B+") return credits * 3.50;
    if(mark == "B") return credits * 3.00;
    if(mark == "C+") return credits * 2.50;
    if(mark == "C") return credits * 2.00;
    if(mark == "D+") return credits * 1.50;
    if(mark == "D") return credits * 1.00;
    if(mark == "F") return credits * 0.00;
    return 1.00;
}

int main() {
    // freopen("data.txt", "r", stdin);
    vector <pair <pair <string, string>, double> > v;

    int n; cin >> n;
    while(n--) {
        string sname, fname;
        int m;
        cin >> sname >> fname >> m;
        double totalGPA = 0, totalCredits = 0;
        while(m--) {
            string mark;
            int credits;
            cin >> mark >> credits;
            totalGPA += score(mark, credits);
            totalCredits += credits;
        }
        double result = totalGPA / totalCredits;
        // cout << setprecision(3) << fixed << result << "\n";
        v.push_back(make_pair(make_pair(sname, fname), result));
    }

    sort(v.begin(), v.end(), comp);

    cout << setprecision(3) << fixed;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << endl;
    }

    return 0;
}