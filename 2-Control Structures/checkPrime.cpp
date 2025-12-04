#include <iostream>
using namespace std;

void welcome(){
    for (int i=1; i<=83; i++){
        cout << "* ";
    }
    cout  << endl;
    for (int i=1; i<=83; i++){
        cout << "* ";
    }
    cout  << endl;
    for (int i=1; i<=15; i++){
        cout << "  ";
    }
    cout<< "PRIME NUMBER CHECKING";
    for (int i=1; i<=15; i++){
        cout << "  ";
    }
    cout << endl;
    for (int i=1; i<=83; i++){
        cout << "* ";
    }
    cout << endl;
    for (int i=1; i<=83; i++){
        cout << "* ";
    }
    cout  << endl;
}

int main(){
    welcome();
    int i, n;
    cout<<"Enter a number to check if it's prime:";
    cin >>n;

    for (i=2; i<n; i++){
        if (n%i==0){
            cout << "Composite Number"<<endl;
            cout <<"Divisible by : " << i<<endl;
            break;
        }
    }

    if (i==n){
        cout << "Prime number"<<endl;
    }

    cout << &i <<endl;

    return 0;
}