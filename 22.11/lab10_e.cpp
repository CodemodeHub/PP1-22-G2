#include <iostream>
#include <map>

using namespace std;

int main() {
    int n; cin >> n;
    map <string, int> m;

    int total = 0;
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        for(int j = 0; j < k; j++) {
            string city; cin >> city;
            int q; cin >> q;
            m[city] += q;
            total += q;
        }
    }
    
    return 0;
}