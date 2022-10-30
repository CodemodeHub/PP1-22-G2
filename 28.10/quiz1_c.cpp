#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // cout << pow(3, 2) << "\n"; <=> 3^2
    // fixed helping u with setprecision, use it
    double ans = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << setprecision(10) << fixed << ans << "\n";

    return 0;
}