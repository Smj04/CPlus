#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Student {
public:
	int nNo;
	char* szName; // ����� ���� �� �ִ� ���� �����ͷ� ��´�. 

public:
	Student() {

		nNo = 0;
		szName = 0;
		cout << "�Ű����� ���� ������" << endl;

	};

	Student(int no, const char* pname) {

		nNo = no;
		szName = new char(strlen(pname)) + 1;
		strcpy(szName, pname); // �ڿ� �ִ°� ������ ���´�.
		cout << "�Ű����� 2���� ������" << endl;
	}

	void printStudent() {

		if (szName != nullptr) { //�����;ִ� if���� ����� null���� �־  --> 0���� ���õ��ֱ⶧���� �׳� if(szName)���� �ص� ����
			cout << nNo << "," << szName << endl;
		}
	}

	~Student() {

		cout << " �Ҹ�" << endl; // st3�� ���� delete�� ���� �������Ѿ��Ѵ�. ������, ��ü���� new�ϸ� �Ҹ��ڿ��� delete�ϱ�!
		//������ �Ҹ��ڴ� ������ �־���Ѵ�
		/*if (szname != nullptr)
			delete szname*/
	}
};

int main() {

	Student st1; // ���� : stact ������ �����. ���α׷��� ���� �� �����
	
	cout << sizeof(st1) << endl;

	st1.nNo = 1;
	st1.szName = new char[20]; //�����Ҵ� �̰� ������ ���X
	cout << "@@@@@@@@@@@@@@@@@"<<endl;
	strcpy(st1.szName, "���ϳ�");
	cout << "+++++++++++++++++"<<endl;
	Student st2(2, "ȫ�浿");

	// Student st3("������");

	Student* st3 = new Student(); // ���� : ���� �޸𸮰� heap������ �����. �������� ���� ���� ������� ���� �Ųٷ� ����

	st1.printStudent();
	st2.printStudent();
	st3->printStudent();

	delete st3; // new�� ¦���̴�. (���� �� �����־����)
	// �������� ���� �ֵ��� ���α׷��� ������ �˾Ƽ� ����������, �������� ���� �ֵ��� ���� �������� �־�� �Ѵ�.
	// malloc -> new , free -> delete �����̴�.

	return 0;
}