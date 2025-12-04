#include <iostream>
using namespace std;

class student{
    private :
    string name;
    int rollNo;
    float marks;

    public :
    void initdata(string n, int rno, float m){
        name = n;
        rollNo = rno;
        marks = m;
        cout << "Database Updated" << endl; 
    }

    void viewdata(){
        cout << "Name  : " << name << endl;
        cout << "Roll No.  : " << rollNo << endl;
        cout << "Marks  : " << marks << endl;
    }

    void grade(){
        if(marks>=90){
            cout << "Grade A" << endl;
        } if(marks>=75){
            cout << "Grade B" << endl;
        } if(marks>=50){
            cout << "Grade c" << endl;
        } else{
            cout << "Grade D" << endl;
        }
    }
};

int main(){
    student stu1;
    student stu2;

    stu1.initdata("Garry", 31,  40000);
    stu1.viewdata();
    
    stu2.initdata("Bronson",32, 40000);
    stu2.viewdata();
    return 0;
}