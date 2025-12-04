#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    a = temp;
    b=a;
    a=temp;
}

int main(){
    int a, b;
    int *ia, *ib;
    cout << "Enter two variables a and b : " ;
    cin >> a >> b;
    ia = &a;
    ib = &b;
    cout << "Before swapping " << *ia << " " << *ib<< endl;
    swap(*ia,*ib);
    cout << "After swapping " << *ia << " " << *ib<< endl;
    return 0;
}