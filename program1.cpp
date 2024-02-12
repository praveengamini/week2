#include<iostream>
#include<string>
using namespace std;

int main() {
    string username;
    cout << "Enter your username: ";
    getline(cin, username);
    cout << "Hello '" << username << "'!" << endl;

    return 0;
}
