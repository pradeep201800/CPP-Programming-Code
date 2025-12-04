#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    fout.open("data.txt");

    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;

    fout << name << endl;
    fout << age << endl;

    fout.close();
    cout << "Data written to file";
    return 0;
}
