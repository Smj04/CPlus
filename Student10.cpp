#include<iostream>
using namespace std;
//�����̸� stack�� �����
class Student {
public:
	int nNo;
	char* szName;
	
	Student() {
		nNo = 0;
		szName = 0;
		cout << "����" << endl;
	}
	Student(int no, const char* pName) {
		nNo = no;
		szName = new char [strlen(pName)+1];
		strcpy(szName,pName);		//���ڿ� �Ű������� ī��  +1�ϴ� ���� : �� ������ +1 
		cout << szName <<" ����" << endl;
		
	}

	Student(Student &n) {
		cout << "����" << endl;
		cout << " �̸� : " << szName;
		n.nNo = this->nNo;
		//szname ����
	}
	void PrintStudent() {
		if (szName != 0) {
			cout << "��ȣ :" << nNo << endl;
			cout << "�̸� : " << szName << endl;
		}
	}

	Student& copy(Student &s) {  //���� ����
		if (&s != this) {							//this�� �����Ͷ� Ÿ���� �ȸ��� �ѱ۾ȱ����� if�� ��
			this->nNo = s.nNo;                         
			if (this->szName != nullptr) {
				cout << szName << " �Ҹ�" << endl; //�Ҹ����� ����ؾ� �߳���
				delete[] this->szName;
				
			}
			this->szName = new char[strlen(s.szName) + 1];
			strcpy(this->szName, s.szName);
			cout << szName << " ����" << endl;

		}
		return *this;
	}

	Student& operator = (Student& s) {
		if (&s != this) {							//this�� �����Ͷ� Ÿ���� �ȸ��� �ѱ۾ȱ����� if�� ��
			this->nNo = s.nNo;
			if (this->szName != nullptr) {
				cout << szName << " �Ҹ�" << endl;
				delete[] this->szName;
				
			}
			this->szName = new char[strlen(s.szName) + 1];
			strcpy(this->szName, s.szName);
			cout << szName << " ����" << endl;

		}
		return *this;
	
	}

	~Student() {
		cout << nNo << "�� �����Ǿ����ϴ�." << endl;
		cout << szName << " �Ҹ�" << endl;
		delete[] szName;
		
	}
};
int main() {
	Student A(1, "ȫ�ϳ�");
	Student B;
	B = A;
	strcpy(A.szName, "ȫ�浿");
	strcpy(B.szName, "ȫ�浿");
	A = A;
	A.PrintStudent();
	B.PrintStudent();
	//strcpy(B.szName, "ȫ�浿");
	//B = A;
	////B.copy(A);
	//A = A;
	//A.PrintStudent();

	Student C(2,"�����");
	C = A;
	A.PrintStudent();
	B.PrintStudent();
	C.PrintStudent();

	
	Student D;
	Student E;
	D = E = A;
	A.PrintStudent();
	D.PrintStudent();
	E.PrintStudent();

	Student F = A;
	A.PrintStudent();
	F.PrintStudent();

	//strcpy(A.szName, "ȫ�浿");
	//A.PrintStudent();
	//B.PrintStudent();
 
	 
	//Student a(1, "���ϳ�");
	//Student *p = new Student(2, "ȫ�ϳ�");
	//Student stu[10];
	//stu[0].nNo = 3;
	//stu[1].nNo=4;
	//strcpy(stu[1].szName, "����ȭ");
	//Student* stu1 = new Student[10];

	///*for (int i = 0; i < 10; i++) {
	//	stu1[i] = new Student; Student* stu[10] new �� �־ for�� �ȵ����� ��
	//}*/

	//stu1[0].nNo = 5;
	//strcpy(stu1[0].szName, "�����");
	//stu1[1].nNo = 6;
	//strcpy(stu1[1].szName, "ȫ�浿");
	//stu1[2].nNo = 7;
	//strcpy(stu1[2].szName, "�ŵ�����");
	//stu1[3].nNo = 8;
	//strcpy(stu1[3].szName, "�鼳����");

	//delete p; //new �����̶� ��������.
	//delete[] stu1;
	return 0;
}