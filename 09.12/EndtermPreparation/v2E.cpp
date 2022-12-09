#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string s1, string s2) {
    int year1 = stoi(s1.substr(6, 4));
    int year2 = stoi(s2.substr(6, 4));

    if(year1 == year2) {
        int month1 = stoi(s1.substr(3, 2));
        int month2 = stoi(s2.substr(3, 2));

        if(month1 == month2) {
            int day1 = stoi(s1.substr(0, 2));
            int day2 = stoi(s2.substr(0, 2));

            return day1 < day2;
        }
        return month1 < month2;
    } 
    return year1 < year2;
}

int main() {
    int n; cin >> n;

    vector <string> v;
    for(int i = 0; i < n; i++) {
        string date; cin >> date;
        v.push_back(date);
    }

    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }

    return 0;
}