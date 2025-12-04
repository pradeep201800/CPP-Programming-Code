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

int fact(int num){
    int factNum = 1;
    for (int i=1; i<=num; i++){
        factNum *= i;
    }
    return factNum;
}

int main()
{
    greeting("Factorial Functions");
    int num;
    long long int factorial; string ans;
    //TO ASK AND PRINT FACTORIAL

    do {
        cout << "Input number to recieve its factorial : " << "";
        cin >> num;
        factorial = fact (num);
        cout << "Factorial of " << num << " is " << factorial << endl;
        cout << "Do you want to check more ? Y/n" << "";
        cin >> ans;
    } while(ans == "Y" || ans == "y" || ans == "yes"); 
    
    


    //TO PRINT THE FACTORIAL OF 1-20

    do 
    {
        factorial = fact (num);
        cout << "Number          "<< "Factorial"<<endl;
        for ( int i=1; i<=20; i++){
            cout << i << "          " << fact(i) << endl;
        }
        cout << "DO you want to print again? " << endl;
        cin >> ans;
    }while (false);

}