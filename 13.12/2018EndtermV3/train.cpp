#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n; cin >> n;
    double a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    double v; cin >> v;
     
    double x = 0;
    for(int i = 0; i < n - 1; i++) {
        x += abs(a[i + 1] - a[i]);
    }

    double ans = x / v;
    cout << setprecision(2) << fixed << ans << endl;

    return 0;
}