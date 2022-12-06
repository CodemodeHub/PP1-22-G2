#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string id;
    string name;
    int age;

    void printInfo() {
        printf("%s has id: %s, age: %d\n", name.c_str(), id.c_str(), age);
    }

    void sayHi(string person) {
        printf("%s: Hello, %s\n", name.c_str(), person.c_str());
        // cout << name << ": Hello, " << person << endl;
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
    }

    zeinaddin.sayHi("Alikhan");

    return 0;
}