#include <iostream>
using namespace std;
class Student {
private :
	int nHakbun;
	const char* sName; //����X
public:
	Student(int nHakbun, const char* sName);
	void show(); // ������Ÿ��
};
Student::Student(int nHakbun, const char* sName) { //������
	nHakbun = 1234;
	sName = "�̻��"; 
	this->nHakbun = nHakbun;
	this->sName = sName;
	cout << "������� �й��� ��ϵǾ����ϴ�." << endl; //��ü�� ���涧���� ����

}
void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�. " << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}
int main() {
	//Student student1; //��ü ���� ��������ó�� ��
	//student1.show();
	//Student student2 = { 5678, "��̸�" };
	//Student2.show();
	Student stu[3] = {
		Student(), Student(1111,"������"), Student(2222,"������")
	};
	for (int i = 0; i < 3; i++) {
		stu[i].show();
	}
	return 0;
}