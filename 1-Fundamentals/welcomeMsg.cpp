#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number : 1/2 ";
    int number;
    cin >> number;
    
    switch (number){
        case 1 : {cout << "Namaste" << endl ; break; }
        case 2 : {cout << "Hello" << endl ; break; }
        default : {cout << "I'm still learning new languages"<< endl;
        break;}
    }

    return 0;
}