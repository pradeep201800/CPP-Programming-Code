#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double sum =0;
    int n, i;
    cout << "Sum upto how many turns? "<<"";
    cin >> n;
    for (i=1; i<=n; i++){
        if (i%2!=0){
            sum+= 1/(pow(i,i));
        }
        else{
            sum-= 1/(pow(i,i));
        }
        cout << "Sum upto " << i << " terms is " << sum << endl;
    }
    cout << "Sum upto " << n << " terms is " << sum << endl;
    return 0;
}

//breaks after 7 terms
//means 8th term -- only repeating ; breaks the program