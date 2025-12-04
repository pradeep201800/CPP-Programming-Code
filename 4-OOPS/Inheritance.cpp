#include <iostream>
using namespace std;

class A {
public:
    int x;
    void input() {
        cout << "Enter value: ";
        cin >> x;
    }
};

class B : public A {
public:
    void show() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    B obj;
    obj.input();
    obj.show();
    return 0;
}

//| Type         | Meaning                     |
//| ------------ | --------------------------- |
//| Single       | One parent → One child      |
//| Multilevel   | Parent → Child → Grandchild |
//| Hierarchical | One parent → Many children  |
//| Multiple     | Many parents → One child    |
//| Hybrid       | Combination of above        |
