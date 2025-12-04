#include<iostream>
#include<cmath>
using namespace std;
float area(float rad)
{
	float Carea=3.14*rad*rad;
	return Carea;
	}	
	float area(float L,float B)
	{
		float Rarea=L*B;
		return Rarea;
	}
	float area(float S1,float S2,float S3)
	{
		float S=S1+S2+S3/2;
		float Tarea=sqrt(S*(S-S1)*(S-S2)*(S-S3));
		return Tarea;
	};
	int main()
	{
		cout<<"Calculating area of figures by overloading:-"<<endl;
		cout<<"Area of Circle"<<" = 3.14 x radius x radius"<<endl;
		cout<<area(4.5)<<endl;
		cout<<"Area of Rectangle"<<" = L x B"<<endl;
		cout<<area(10,20)<<endl;
		cout<<"Area of Triangle"<<" = sqrt(Sx(S-S1)x(S-S2)x(S-S3))"<<endl;
		cout<<area(1,2,3)<<endl;
	}
