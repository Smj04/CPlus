#include<iostream>
using namespace std;
class Cat {
private: 
	int* pAge = new int; //���� ����
	const char* Pname = new char; //���� ����
public:
	Cat() {
		*pAge = 18;
		Pname = "�߿���";
	}

	~Cat() {
		delete pAge;
		delete Pname;
	}
	void setAge(int age) {
		*pAge = age;
	}
	int getAge() {
		return *pAge;
	}

	void setName(const char* name) {
		Pname = name;
	}
	char* getName() {
		return (char*)Pname;
	}
};
int main() {
	Cat* pCat = new Cat; // ������ ��ü
	cout << "������� ���� : " << pCat->getAge() << ", " << "������� �̸� : " << pCat->getName() << endl; // �����ʹϱ� -> or /(*)
	pCat->setAge(20);
	pCat->setName("�����");
	cout << "������� ���� : " << pCat->getAge() << ", " << "������� �̸� : " << pCat->getName() << endl;
	return 0;
}