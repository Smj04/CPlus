#include <iostream>
using namespace std;
class Employee {
public:
	int salary = 3000;
	const char* name = "ȫ�浿";
	Employee(int _sal, const char* _name); //�Ű������� ���ο��� 
	//�޾Ƽ� �Ҵ�
	void Ms();
};
Employee::Employee(int salary, const char* name) {
	this->salary = salary;
	this->name = name; //�Ű������� �̸� ������ this->�� ��
	cout << "��ü ����" << endl;
}
void Employee::Ms() {

	cout << "�̸� : " << name << endl;
	cout << "���� : " << salary << endl;
}

int main() {
	
	Employee e1 = { 5678,"��̸�" }; //��ȣ �ᵵ ��
	
	e1.Ms();
	return 0;

}
