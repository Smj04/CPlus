#include <iostream>
using namespace std;

class Person{

	int age; 
public:
	Person* GetThis() { //this�� ��ü�� �ڷ����� �Ȱ��ƾ��ϱⶫ��
		return this;
	}
	/*void setAge(int _age) {
		age = _age;
	}*/
	int getAge() {
		return age;
	}
};
int main() {
	Person* p1 = new Person(); //����
	cout << p1 << endl;
	/*p1->setAge(30);*/
	cout << p1->GetThis() << endl; //this�� p1�� �ּҰ��� ����
	cout << p1->getAge()<<endl;

	Person* p2 = new Person(); //����
	cout << p2 << endl;
	cout << p2->GetThis() << endl;
	return 0;
}