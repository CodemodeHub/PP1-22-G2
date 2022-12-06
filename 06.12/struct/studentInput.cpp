#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string id;
    string name;
    int age;

    void printInfo() {
        cout << id << " " << name << " " << age << endl;
    }
};

int main() {
    vector <Student> students;

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        string id, name;
        int age;
        cin >> id >> name >> age;
        Student tmp = {id, name, age};
        students.push_back(tmp);
    }

    for(int i = 0; i < students.size(); i++) {
        students[i].printInfo();
    }

    return 0;
}