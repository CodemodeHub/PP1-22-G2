#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector <int> v;
    for(int i = 1; i <= 3; i++) {
        v.push_back(i);
    }

    int cnt = 0;
    do {
        cnt++;
    } while(next_permutation(v.begin(), v.end()));

    cout << cnt << endl;

    return 0; 
}