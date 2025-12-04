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

class employee {
    private:
        int empId;
        string name;
        int salary;
    
    public : 
        void initdata(int id, string n, int s){
            empId = id;
            name = n;
            salary = s;
            cout << "Database Updated" << endl;
        }

        void viewdata(){
            cout << "Employee Id  : " << empId << endl;
            cout << "Name  : " << name << endl;
            cout << "Salary  : " << salary << endl;
        }

        void update_Salary(int s){
            salary = s;
            cout << "New salary is : " << endl;
        }
};

int main(){
    greeting("Employee Class");
    employee emp1;
    employee emp2;

    emp1.initdata(101, "Sam", 40000);
    emp2.initdata(102, "Wonk", 40000);

    emp1.viewdata();
    emp2.viewdata();
    return 0;
}