#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n; cin >> n;
    queue<string> q;
    while(n--) {
        int action; cin >> action;
        if(action == 1) {
            string s; cin >> s;
            q.push(s);
            cout << q.front() << endl;
        } else {
            if(q.empty() == false) {
                q.pop();
            }
            if(q.empty() == false) {
                cout << q.front() << endl;
            } else {
                cout << "queue is empty" << endl;
            }
        }
    }

    return 0;
}