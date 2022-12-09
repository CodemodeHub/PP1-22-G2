/*
Hi, guys!
Firstly, I want to check you.
Your task: Sort vector, which contains Person (football player)
1 - sort by goals, if equals by assists
2 - sort by goals, then by assists, if equals -> age -> name
3 - sort values by total rating: Rating = Goals + Assists

Input:
6
Messi 35 3 1
Mbappe 23 5 2
Gakpo 23 3 0
Giroud 36 3 0
Morata 30 3 1 
Bruno 28 2 3

1) comp1
Output:
Mbappe 23 5 2
Messi 35 3 1
Morata 30 3 1
Gakpo 23 3 0
Giroud 36 3 0
Bruno 28 2 3

2) comp2
Output:
Mbappe 23 5 2
Messi 35 3 1
Morata 30 3 1
Giroud 36 3 0
Gakpo 23 3 0
Bruno 28 2 3

3) comp3
Output:
Mbappe 23 5 2
Bruno 28 2 3
Messi 35 3 1
Morata 30 3 1
Gakpo 23 3 0
Giroud 36 3 0
*/

#include <iostream>
#include <vector>
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

    cout << "BEFORE\n";
    for(int i = 0; i < v.size(); i++) {
        v[i].printInfo();
    }

    sort(v.begin(), v.end(), comp3);

    cout << "AFTER\n";
    for(int i = 0; i < v.size(); i++) {
        v[i].printInfo();
    }

    return 0;
}