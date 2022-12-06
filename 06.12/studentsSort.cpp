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

bool compByAge(Student &s1, Student &s2) {
    return s1.age < s2.age;
}

bool compByAgeAndName(Student &s1, Student &s2) {
    if(s1.age == s2.age) {
        return s1.name < s2.name;
    }
    return s1.age < s2.age;
}

bool comp(Student &s1, Student &s2) {
    if(s1.id == s2.id) {
        if(s1.name == s2.name) {
            return s1.age < s2.age;
        }
        return s1.name < s2.name;
    }
    return s1.id < s2.id;
}

int main() {
    Student alikhan = {"21B03", "Alikhan", 17};
    Student alikhan1 = {"21B00", "Alikhan", 19};
    Student zeinaddin = {"22B00", "Zeinaddin", 18};
    Student balzhan = {"22B01", "Balzhan", 17};
    Student zhanel = {"22B02", "Zhanel", 17};
    Student aral = {"23B04", "Aral", 18};

    vector <Student> students;
    students.push_back(zeinaddin);
    students.push_back(balzhan);
    students.push_back(zhanel);
    students.push_back(alikhan1);
    students.push_back(aral);
    students.push_back(alikhan);

    cout << "BEFORE\n";
    for(int i = 0; i < students.size(); i++) {
        students[i].printInfo();
    }

    sort(students.begin(), students.end(), comp);

    cout << "AFTER\n";
    for(int i = 0; i < students.size(); i++) {
        students[i].printInfo();
    }

    return 0;
}