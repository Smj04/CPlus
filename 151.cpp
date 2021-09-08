#include <iostream>
using namespace std;
class Student {
private: 
	char* name;
	int age;

public:

	Student() {
		name = 0;
		age = 0;
	}


	Student(const char* name, int age) : age(age) {
		this->name = new char[20];
		cout << "@@@@@@@@@@@@@@@@" << endl;
		strcpy_s(this->name, 20, name);
	}

	void ShowInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;

	}
	Student& operator= (Student& ref) {
		delete[] name;
		name = new char[20];
		cout << "***********" << endl;
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		return *this;
	}
	~Student() {
		if(name != 0){
		delete[] name;
		
		cout << "~Student 소멸자 호출!" << endl;
		cout << name << "소멸" << endl;
		cout << age << "소멸" << endl;
		}
	}
};

int main() {
	Student st1("미림인", 27);
	Student st2("마이스터인", 10);
	st2 = st1;
	st1.ShowInfo();
	st2.ShowInfo();


	Student st3;
	 st3 = st1 = st2;

	Student st4;
	st4 = st1;

	return 0;
}