#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void input() {
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
    }

    void display() {
        cout << roll << endl;
        cout << name << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
