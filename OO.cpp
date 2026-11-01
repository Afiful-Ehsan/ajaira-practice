#include <bits/stdc++.h>
using namespace std;

class Parent {
public:
    void display() {
        cout << "I am Parent" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "I am Child" << endl;
    }
};

int main() {
    Child obj;
    obj.display();
    obj.show();

    return 0;
}
