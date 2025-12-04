#include<iostream>
using namespace std;
class Teacher
{ 
  public:
string name;
string subject;
 public:
     void inputdetails(string n,string s)
{
  name=n;
  subject=s;
}
void displayinfo()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Subject: "<<subject<<endl;
}
};
class MathsTeacher : public Teacher 
{
	public:
	string qualifications;
	void setqualifications(string q)
	{
     qualifications=q;
 }
	void showdetails()
	{
		displayinfo();
		cout<<"Qualifications: "<<qualifications<<endl;
		cout<<name<<" teaches "<<subject<<endl;
	}
};
int main()
{
	MathsTeacher m;
	m.inputdetails("Anshu","Maths");
	m.setqualifications("M.Sc Mathematics");
	m.showdetails();
	return 0;
}

