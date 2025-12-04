#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    ofstream fout;

    fin.open("data.txt");
    fout.open("copy.txt");

    string text;
    while (fin >> text)
        fout << text << " ";

    fin.close();
    fout.close();

    cout << "File copied";
    return 0;
}
