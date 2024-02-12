#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int num = 123;
    double pi = 3.141592653589793;

    // endl manipulator
    cout << "Using endl:" << endl;
    cout << "Hello" << endl;
    cout << "World" << endl;

    cout << "\nUsing setw and setfill:" << setw(10) << setfill('*') << num << endl;

    cout << "\nUsing setprecision:" << fixed << setprecision(5) << pi << endl;

    return 0;
}
