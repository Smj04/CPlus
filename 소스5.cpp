#include<iostream>
using namespace std;
class Student {
private:
	char* name;
	int age;

public:
	Student(const char* myname, int myage) {
		int len = strlen(myname) + 1; //+1 안하면 에러
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
		}
	void ShowStudentInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " <<age << endl;
	}
	~Student() {
		
		cout << name <<"called destructor!" << endl;
		delete[]name;

	}
};

int main(void) {
	Student student1("lee mee rim", 33); //죽을때는 맨 마지막부터 죽어서 홍길동부터 출력된다
	Student student2("hong gil dong", 34);
	cout << sizeof(Student)<<endl; //멤버변수가 2개라서 4byte+ 4btye 두개라 8
	cout << &student1 << endl;
	cout << &student2 << endl;
	student1.ShowStudentInfo();
	student2.ShowStudentInfo();
	return 0;
}