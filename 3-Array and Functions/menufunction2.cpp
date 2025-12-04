#include <array>    
#include <iostream>
using namespace std;

int maxEl(int arrp[]){
    int maxel = arrp[0];

    for(int i=0; i<5 ; i++){
        maxel = max(arrp[i], maxel);
    }
    cout << "Greatest element is : " << maxel << endl;
    return 0;
}

int findEl(int num, int arrp[]){
    int index = 0;
    for(int i=0; i<5; i++){
        if( arrp[i] == num){
            index = i;
            cout << "Element found at index " << i << endl;
            return index;
        }
        else {
            cout << "Element not found" << endl; 
        }
    }
    return 0;
}

int times(int arrp[]){
    int times = 0;
    for(int i=0; i<5 ; i++){
        if( arrp[i] >= 75){
            times += 1;            
        }
    }
    return times;
}

int rev(int arrp[]){
    cout << "Original Array : " << arrp << endl;
    for (int i=1; i<=5; i++){
        
    }
    return 0;
}

int main (){
    int choice;
    cout << "Create your array : " << endl;
    int arrp[5];
    for (int i = 0; i < 5; i++){
        cout << "Enter element : ";
        cin >> arrp[i];
    }
    cout << "\n\n\nMenu : " << endl;
        cout << "1.Find the max element in your array\n2.Find your required element\n3.Count all occurrences of marks greater than 75\n4.Reverse your array\n5.Delete all duplicate elements.\n6.Exit\n" ;
        cout << "Enter your choice : " ;
        cin >> choice;
    do {
        while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6){
            cout << "Invalid Choice\nEnter again : ";
            cin>> choice;
        }
        switch (choice){
            case 1 : {
                maxEl(arrp);
                break;
            }
            case 2 : {
                int el;
                cout << "Enter the element you want to find : ";
                cin >> el;
                findEl(el, arrp);
                break;
            }
            case 3 : {
                int el, occur;
                cout << "Enter the element to find occurence : ";
                cin >> el;
                occur = times(arrp);
                cout << "No of students with marks <= 75 are " << occur << endl;
                break;
            }
            //reverse
            case 4 : {

                break;
            }
            //delete the duplicates
            case 5 : {
                break;
            }
            case 6 : {
                cout << "Exitting....\n";
                break;
            }
            default : {cout << "Invalid Choice!!!";}
        }
        cout << "\nSo, what's next?\n\n";
        cout << "1.Find the max element in your array\n2.Find your required element\n3.Count all occurrences of marks greater than 75\n4.Reverse your array\n5.Delete all duplicate elements.\n6.Exit\n" ;
        cout << "Enter your choice : " ;
        cin >> choice;

    } while (choice < 6);
}