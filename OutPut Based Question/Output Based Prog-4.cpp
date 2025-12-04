#include <iostream>
using namespace std;
class Demo {
	public:
		int x=5;
		void show(){
			cout<<x;
		}
};
int main(){
	Demo d1;
	d1.show();
	return 0;
}
