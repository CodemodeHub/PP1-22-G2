#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque <int> d;

    d.push_back(0);  // add to back
    d.push_front(1); // add to front

    while(!d.empty()) {
        cout << d.back() << " ";
        d.pop_back();
    }

    return 0;
}