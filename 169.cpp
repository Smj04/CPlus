#include <iostream>
using namespace std;
class Parent {
public:
	Parent() {
		cout << "Parent" << endl;
	}
	virtual ~Parent() {
		cout << "~Parent" << endl;
	}
};

class Child : public Parent {
public:
	Child() {
		cout << "Child" << endl;
	}
	~Child() {
		cout << "~Child" << endl;
	}
};

void main() {
	Parent* ptr = new Child;
	delete ptr;	//소멸은 거꾸로 자식부터 
	//virtual 없으면 자식 소멸 X
}