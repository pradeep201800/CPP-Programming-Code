#include <iostream>
using namespace std;

int main(){

    cout << "Enter a number: " << "";
    int number,var;
    cin >> number;
    int sum = 0;
    var = number;

    while (number/10 != 0){
        sum = sum + number%10;
        number = number/10;
    };

    cout << "Sum of digits in " << var << " is => " << sum + number << "\n";
    return 0;
}