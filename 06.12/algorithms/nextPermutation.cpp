#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector <int> v;
    for(int i = 1; i <= 3; i++) {
        v.push_back(i);
    }

    do {
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } while(next_permutation(v.begin(), v.end()));

    return 0; 
}