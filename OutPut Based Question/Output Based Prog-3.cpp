#include <iostream>
using namespace std;
void test(int &x){
	x=x+10;
}
int main(){
	int a=5;
	test(a);
	cout<<a;
	return 0;
}
	