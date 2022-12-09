#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Player {
    string name;
    int age;
    int goals;
    int assists;

    void printInfo() {
        printf("%s %d %d %d\n", name.c_str(), age, goals, assists);
    }

    int getRating() {
        return goals + assists;
    }
};

bool comp1(Player &p1, Player &p2) {
    if(p1.goals == p2.goals) {
        return p1.assists > p2.assists;
    }
    return p1.goals > p2.goals;
}

bool comp2(Player &p1, Player &p2) {
    if(p1.goals == p2.goals) {
        if(p1.assists == p2.assists) {
            if(p1.age == p2.age) {
                return p1.name > p2.name;
            }
            return p1.age > p2.age;
        }
        return p1.assists > p2.assists;
    }
    return p1.goals > p2.goals;
}

bool comp3(Player &p1, Player &p2) {
    return p1.getRating() > p2.getRating();
}

int main() {
    freopen("input.txt", "r", stdin);

    int n; cin >> n;
    vector <Player> v;
    while(n--) {
        string name;
        int age, goals, assists;
        cin >> name >> age >> goals >> assists;
        Player tmp = {name, age, goals, assists};
        v.push_back(tmp);
    }

    sort(v.begin(), v.end(), comp1);
    
    for(int i = 0; i < v.size(); i++) {
        v[i].printInfo();
    }

    return 0;
}