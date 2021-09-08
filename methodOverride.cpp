#include <iostream>
using namespace std;
class Person {
public:
	void Print() {
		cout << "Person's Method" << endl;
	}
};
class Student : public Person{		//타입과 접근자 부모와 똑같이 써줘야한다. 내용물은 달라도 OK
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