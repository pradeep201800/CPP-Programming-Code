#include <iostream>
using namespace std;

class Add {
public:
    int sum(int a, int b) {
        return a + b;
    }

    int sum(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Add obj;
    cout << "Sum of two numbers: " << obj.sum(5, 10) << endl;
    cout << "Sum of three numbers: " << obj.sum(2, 3, 4) << endl;
    return 0;
}
