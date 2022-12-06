#include <iostream>

using namespace std;

struct Car {
    int wheels;
    string brand;
    string name;
};

int main() {
    Car f90;
    f90.wheels = 4;
    f90.brand = "BMW";
    f90.name = "F90";
    cout << f90.brand << endl;

    Car zeinadinCar = {5, "Mers", "Maybach"};
    cout << zeinadinCar.wheels << " " << zeinadinCar.brand << " " << zeinadinCar.name << endl;

    return 0;
}