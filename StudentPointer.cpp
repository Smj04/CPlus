#include<iostream>
using namespace std;
class Student {
public:
	int nNumber;
	char* sName = 0;
	Student() {
		char* sName = new char + 1;
		nNumber = 0;
		sName= 0;
		cout << "�Ű������� ���� ������" << endl;
	}
	Student(int nO, const char* pname) {
		nNumber = nO;
		strcpy(sName, pname);
		cout << "�Ű������� �ΰ��� ������" << endl;
	}
	void print_Student() {
		cout << "nNumber : " << nNumber << "\tnName : " << sName << endl;
	}
	~Student() {
		cout << "�̸� : " << sName << "���� ���߽��ϴ�." << endl;
		delete Student::sName;
	}
};
int main() {
	system("color F0");
	Student st1;
	st1.nNumber = 1;
	strcpy(st1.sName, "�ϳ��ϳ��ϳ��ϳ��ϳ�");
	sizeof(st1);

	Student st2(2, "ȫ�浿");
	st1.print_Student();
	st2.print_Student();

	/*Student st3("����ȭ");*/

	Student* st3 = new Student();
	st3->nNumber = 3;
	strcpy(st3->sName, "�����");
	//�����Ϳ� �����̳� ������ �߻��� ��찡 ����� �����ʹ� �����Ҵ��� �����ϴ�. 
	//�׷��� �׷� ���� ���� ��� ���� �Ҵ�
}