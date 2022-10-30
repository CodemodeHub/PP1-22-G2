#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(abs(x1 - x2) == abs(y1 - y2)) {
        cout << "WON\n";
    } else {
        cout << "LOSE\n";
    }

    return 0;
}