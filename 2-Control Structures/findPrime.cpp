#include <iostream>
using namespace std;

void greeting(string n){
    for(int i=0; i<=24; i++){
        cout << "* ";
    }
    cout << endl;
    cout << n <<endl;
    for(int i=0; i<=24; i++){
        cout << "* ";
    }
    cout << endl;
}

int main()
{
greeting("Finding Prime");
int i, a, b,num;
cout << "Enter starting number "<< "";
cin >> a;
cout << "Enter last number "<< "";
cin >> b;

cout << "Prime Numbers between " << a << " & " << b << " are: " ; 

for(num = a; num <=b; num++){
    for (i=2; i<num ; i++){
        if (num%i==0){
            break;
        }
    }
    if (i==num){
        cout << num << " ";
    }
}

cout << endl;
}