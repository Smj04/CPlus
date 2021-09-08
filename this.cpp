#include <iostream>
using namespace std;

class Person{

	int age; 
public:
	Person* GetThis() { //this는 객체와 자료형이 똑같아야하기땜에
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
	Person* p1 = new Person(); //동적
	cout << p1 << endl;
	/*p1->setAge(30);*/
	cout << p1->GetThis() << endl; //this는 p1과 주소값이 같다
	cout << p1->getAge()<<endl;

	Person* p2 = new Person(); //동적
	cout << p2 << endl;
	cout << p2->GetThis() << endl;
	return 0;
}