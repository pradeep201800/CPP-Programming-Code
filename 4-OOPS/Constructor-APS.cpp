#include <iostream>
#include <string>
using namespace std;

class APS {
private:
    string name;
    int rollno;
    float phy, cs, maths;

public:
    
    APS() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter Marks in Physics: ";
        cin >> phy;
        cout << "Enter Marks in CS: ";
        cin >> cs;
        cout << "Enter Marks in Maths: ";
        cin >> maths;
        cout << endl;
    }

    string getName() { return name; }
    int getRoll() { return rollno; }
    float getMaths() { return maths; }
    float getPhysics() { return phy;
	}
	float getCS() { return cs;
	}

    float average() {
        return (phy + cs + maths) / 3.0;
    }
};

int main() {
    APS s[5];   

    string searchName;
    cout << "Enter name to search: ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (s[i].getName() == searchName) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Student FOUND.\n";
    else
        cout << "Student NOT found.\n";

   
    int r;
    cout << "\nEnter roll number to get average marks: ";
    cin >> r;

    bool rollFound = false;
    for (int i = 0; i < 5; i++) {
        if (s[i].getRoll() == r) {
            cout << "Average Marks = " << s[i].average() << endl;
            rollFound = true;
            break;
        }
    }

    if (!rollFound)
        cout << "Roll number not found.\n";

    
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (s[i].getMaths() > s[maxIndex].getMaths())
            maxIndex = i;
    }

    cout << "\nTopper in Maths:\n";
    cout << "Name : " << s[maxIndex].getName() << endl;
    cout << "Roll Number : " << s[maxIndex].getRoll() << endl;

    return 0;
}

