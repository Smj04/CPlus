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
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;

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
		
		cout << "~Student �Ҹ��� ȣ��!" << endl;
		cout << name << "�Ҹ�" << endl;
		cout << age << "�Ҹ�" << endl;
		}
	}
};

int main() {
	Student st1("�̸���", 27);
	Student st2("���̽�����", 10);
	st2 = st1;
	st1.ShowInfo();
	st2.ShowInfo();


	Student st3;
	 st3 = st1 = st2;

	Student st4;
	st4 = st1;

	return 0;
}