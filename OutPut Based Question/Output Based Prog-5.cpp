#include <iostream>
using namespace std;

class Sample{
	int x;
	public:
		void setData(int a){
			x=a;
		}
		void show() {
			cout<<x;
		}
};

int main() {
	Sample s;
	s.setData(25);
	s.show();
	return 0;
}