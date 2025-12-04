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

//1 october homework

string revStr(){
    string str;
    cin.ignore();
    getline (cin, str);
    cout << "Reversing the string ................" << endl;
    string revstr;
    int length = str.length();
    for (int i=0; i<= length; i++){
        revstr += str[length-i];
    }
    cout << "String reversed is : " << revstr << endl;
    return str;
}

bool palString(){
    bool ispalindrome = true;
    string str;
    cin.ignore();
    getline(cin, str);
    int length = str.length();


    for (int i =0 ; i<=length; i++){
        if (str[i] != str [length - 1 -i]){
            ispalindrome = false;
            cout << "The string " << str << " is not a palindrome." << endl;
            break;
        }
    }
    if (ispalindrome) {
        cout << "This string " << str << " is a palindrome" << endl ;
    }
    cin.ignore();\
    return ispalindrome; ;
}

bool checkPrime(int n){
    int i;
    bool isPrime = false;
    for (i=2; i<n; i++){
        if (n%i==0){
            break;
        }
    }

    if (i==n){
        isPrime = true;
    }

    return isPrime;
}

unsigned long long int factorial(int num){
    int factNum = 1;
    for (int i=1; i<=num; i++){
        factNum *= i;
    }
    return factNum;
}

int sumOfDigits(){
    int number;
    int sum = 0;
    cin >> number;
    int temp = number;

    while (number/10 != 0){
        sum = sum + number%10;
        number = number/10;
    };

    cout << "Sum of digits in " << temp << " is => " << sum + number << "\n";
    return 0;
}

int main(){
    greeting("Menu Function");
    int operation;
    cout << "1. Reverse a string\n2. Check for prime\n3. Calculate Factorial\n4. Sum of digits of a number\n5. String Palindrome or not\n6. Exit\n";
    cout << "\nChoose operation = ";
    cin >> operation;
    do {
        while (operation < 1 || operation > 7){
            cout << "Invalid Choice\nEnter again : ";
            cin>> operation;
        }

        switch(operation){
            case 1 : {
                string str;
                cout << "Enter a string : ";
                revStr();
                break;}
            case 2 : {
                int num, prime;
                cout << "Enter a number to check prime : ";
                cin >> num;
                cout << "Checking for prime..................." << endl;
                prime = checkPrime(num);
                if (prime){
                    cout << num << " is a prime number.\n" ;
                }
                else {
                    cout << num << " is not prime.\n" ;
                }
                break;}
            case 3 : {
                int num; long long int fact;
                cout << "Enter a number to recieve its factorial : ";
                cin >> num;
                cout << "Calculating factorial.................." << endl;
                fact = factorial(num);
                cout << "Factorial is : " << fact;
                break;}
            case 4 : {
                int num;
                cout << "Enter a number to gewt sum of its digits : " ;
                sumOfDigits();
                break;}
            case 5 : {
                string str;
                cout << "Enter a string to check if its palindrome : " ;
                palString();
                break;}
            case 6 : {
                cout << "Exitting....\n";
                break;}
            default : {cout << "Invalid Choice!!!";}
        }
        cout << "\nSo, what's next?\n\n";
        cout << "1. Reverse a string\n2. Check for prime\n3. Calculate Factorial\n4. Sum of digits of a number\n5. String Palindrome or not\n6.Exit\n";
        cout << "Enter your choice : " ;
        cin>>operation;
        


    } while(operation < 6 );
    return 0;
}