#include <iostream>
using namespace std;
class Counter {
	int count;
	public:
		Counter(){count=0;
		}
		void inc(){count++;
		}
		void show(){cout<<count;
		}
};
int main(){
	Counter c;
	c.inc();
	c.inc();
	c.show();
	
}