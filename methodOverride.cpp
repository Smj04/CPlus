#include <iostream>
using namespace std;
class Person {
public:
	void Print() {
		cout << "Person's Method" << endl;
	}
};
class Student : public Person{		//Ÿ�԰� ������ �θ�� �Ȱ��� ������Ѵ�. ���빰�� �޶� OK
public:
	void Print() {
		cout << "Student's Method" << endl;
	}

};
int main() {
	Student student;
	student.Print();
	return 0;
}