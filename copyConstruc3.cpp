#include <iostream>
#include<cstring>
using namespace std;
class Person {
	//private
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname); //���� ����� ����� ����
		age = myage;
	}
	//Person(Person& s){
	//	this->age = s.age;{
	//	//�̸��� ������ s(s) �̷��� �տ��� this����
	//}
	void ShowPerson() const {
		cout << "�̸� " << name << " ";
		cout << "���� " << age << " ";
	}
	~Person() {
		delete []name;
		cout << "called destructor" << endl;
	}
};
int main() {
	Person man1("Lee Mee Rim", 27);		//�Ű����� 2���� �ι�° ������ ȣ��
	Person man2(man1);
	man1.ShowPerson();
	man2.ShowPerson();
	return  0;
}