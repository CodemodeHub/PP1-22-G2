#include <iostream>

using namespace std;

int main() {
    int d, c; 
    cin >> d >> c;

    int p, n;
    cin >> p >> n;

    int total_d = ((d * 100 + c) - p * n) / 100;
    int total_c = ((d * 100 + c) - p * n) % 100;
    cout << total_d << " " << total_c << "\n";

    return 0;
}