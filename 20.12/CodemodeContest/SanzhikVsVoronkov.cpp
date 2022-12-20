#include <iostream>

using namespace std;

int main() {
    int p, t, a;
    cin >> p >> t >> a;

    int total = 0;
    for(int i = 0; i < a; i++) {
        int x; cin >> x;
        int q = x / t;
        if(q > 10) {
            q = 10;
        }
        total += q;
    }

    if(total >= p) {
        printf("Stipuha est' - mozhno poest'\n%d\n", total);
    } else {
        printf("Voronkov chert!\n%d\n", total);
    }

    return 0;
}