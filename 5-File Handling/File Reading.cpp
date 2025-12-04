#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("data.txt");

    string name;
    int age;

    fin >> name;
    fin >> age;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    fin.close();
    return 0;
}
