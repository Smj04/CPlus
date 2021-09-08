#include<iostream>
using namespace std;
class Student {
private:
	char* name;
	int age;

public:
	Student(const char* myname, int myage) {
		int len = strlen(myname) + 1; //+1 ���ϸ� ����
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
		}
	void ShowStudentInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " <<age << endl;
	}
	~Student() {
		
		cout << name <<"called destructor!" << endl;
		delete[]name;

	}
};

int main(void) {
	Student student1("lee mee rim", 33); //�������� �� ���������� �׾ ȫ�浿���� ��µȴ�
	Student student2("hong gil dong", 34);
	cout << sizeof(Student)<<endl; //��������� 2���� 4byte+ 4btye �ΰ��� 8
	cout << &student1 << endl;
	cout << &student2 << endl;
	student1.ShowStudentInfo();
	student2.ShowStudentInfo();
	return 0;
}