#include <iostream>
using namespace std;
class CPerson {
private:
	string name;
	int age;
public:
	CPerson(){
		cout << "ȫ�浿 ����" << endl;
	}

	CPerson(string name, int age){
		this->name = name;
		this->age = age;
		
	}
	void setName(int name) {
		this->name = name;
		
	}
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	void print() {
		cout << name << "�� " << age << "�� �Դϴ�." << endl;
	}
	~CPerson() {
		cout << "ȫ�浿 �Ҹ�" << endl;
	}
};
int main() {

	CPerson();
	CPerson cp("ȫ�浿", 33);
	cp.print();
	return 0;
}