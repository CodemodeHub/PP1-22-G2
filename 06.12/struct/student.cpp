#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string id;
    string name;
    int age;

    void printInfo() {
        cout << id << " " << name << " " << age << endl;
    }

    void voice() {
        cout << "discrete math is hard" << endl;
    }
};

int main() {
    Student zeinaddin = {"22B00", "Zeinaddin", 18};
    Student balzhan = {"22B01", "Balzhan", 17};
    Student zhanel = {"22B02", "Zhanel", 17};

    vector <Student> students;
    students.push_back(zeinaddin);
    students.push_back(balzhan);
    students.push_back(zhanel);

    for(int i = 0; i < students.size(); i++) {
        students[i].printInfo();
        // students[i].voice();
    }
    zeinaddin.voice();

    return 0;
}