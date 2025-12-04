#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("data.txt");

    char ch;
    int count = 0;

    while (fin.get(ch))
        count++;

    fin.close();
    cout << "Total characters = " << count;
    return 0;
}
