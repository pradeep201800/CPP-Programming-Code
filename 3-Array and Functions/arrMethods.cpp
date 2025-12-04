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
    greeting("Finding in Array");
    int marks[5], i;
    for (i=0; i<5; i++){
        cout << "Enter marks of student : "<<"";
        cin>>marks[i];
    }

    bool smore = true;
   
    
    while (smore){
        int findM;
        cout << "Enter marks to find : "<<"";
        cin >>findM;

        for (i=0; i<5; i++){
            if (marks[i]==findM){
                cout << findM << " found at index "<<i<<" and position "<<i+1 <<endl ;
                
            }
        }

        if(smore == true){
            smore = true;
        }    
        else {
            smore = false;
        }
    }
    return 0;
}