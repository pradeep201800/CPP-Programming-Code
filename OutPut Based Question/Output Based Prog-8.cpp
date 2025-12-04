#include <iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
		void display(){
			cout<<name<<""<<age;
		}
};
int main(){
	student s1;
	s1.name="Amit";
	s1.age=20;
	s1.display();
}