
#include<iostream>
using namespace std;

class Student {
public:
	int nNo;
	char* szName[20];

	Student() {
		int nNo = 0, char szName = 0;
		cout << "�Ű����� ���� ������" << endl;
	}
	Student(int nNo, char* pName) {
		const char* pName;
		strcpy(pName, szName);
		cout << "�Ű����� �ΰ��� ������" << endl;
	}
	void printStudent() {
		cout << nNo << endl;
		cout << szName << endl;
	}
	~Student() {
		cout << szName << endl;
		delete[]st3; //free
	//delete �� new�� ¦���̴�
	}
};


int main() {

	Student st1; // ���� : stact ������ �����. ���α׷��� ���� �� �����

	cout << sizeof(st1) << endl;

	st1.nNo = 1;
	strcpy(st1.szName, "���ϳ�");

	Student st2(2, "ȫ�浿");

	// Student st3("������");

	Student* st3 = new Student(3, "�����"); // ���� : ���� �޸𸮰� heap������ �����. �������� ���� ����


	st1.printStudent();
	st2.printStudent();
	st3->printStudent();

	delete st3; // new�� ¦���̴�. (���� �� �����־����)
	// �������� ���� �ֵ��� ���α׷��� ������ �˾Ƽ� ����������, �������� ���� �ֵ��� ���� �������� �־�� �Ѵ�.
	// malloc -> new , free -> delete �����̴�.

	return 0;
}
//int main() {
//	Student st1; //�����Ҵ�
//	cout << sizeof(st1)<<endl;
//	st1.nNo = 1;
//	st1.szName = new char[20];
//
//	strcpy(st1.szName, "���ϳ�");
//	Student st2 = (2, "ȫ�浿");
//	Student* st3 = new Student(3, "�����");//�����Ҵ� //malloc()
//
//	st1.printStudent();
//	st2.printStudent();
//	st3->printStudent();
//
//	delete st3;
//	//+1����  strelen+1


//}