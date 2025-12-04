#include <iostream>
using namespace std;

int main() {
	int x=1;
	switch(x) {
		case 1:cout<<"Monday";
		case 2:cout<<"Tuesday";break;
		default:cout<<"Weekend";
	}
	return 0;
}