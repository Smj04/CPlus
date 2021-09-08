#include <iostream>
using namespace std;
class Person {
protected: string name; int age;	//protected는 내가 상속해준 사람한테만 접근 가능 
public :
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;
	}
	Person() { cout << "아빠" << endl; }
};			//생성자를 없애면 아빠 기본생성자 찾음
class Student : public Person {
private: int id;
public: Student(int id, const string& name, int age)  { //:Person(name, age)
	this->id = id;

}
	  void ShowPerson() {
		  cout << name << "의 나이는 " << age << " 아이디는 "<<id<<"입니다. " << endl;
	  }
};
int main() {
	Student st(1234, "홍길동", 33);
	st.ShowPerson();
	return 0;
}