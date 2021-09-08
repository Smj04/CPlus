#include<iostream>
using namespace std;
//정적이면 stack에 저장됨
class Student {
public:
	int nNo;
	char* szName;
	
	Student() {
		nNo = 0;
		szName = 0;
		cout << "생성" << endl;
	}
	Student(int no, const char* pName) {
		nNo = no;
		szName = new char [strlen(pName)+1];
		strcpy(szName,pName);		//문자열 매개변수를 카피  +1하는 이유 : 널 값까지 +1 
		cout << szName <<" 생성" << endl;
		
	}

	Student(Student &n) {
		cout << "생성" << endl;
		cout << " 이름 : " << szName;
		n.nNo = this->nNo;
		//szname 쓰기
	}
	void PrintStudent() {
		if (szName != 0) {
			cout << "번호 :" << nNo << endl;
			cout << "이름 : " << szName << endl;
		}
	}

	Student& copy(Student &s) {  //깊은 복사
		if (&s != this) {							//this는 포인터라서 타입이 안맞음 한글안깨지게 if문 줌
			this->nNo = s.nNo;                         
			if (this->szName != nullptr) {
				cout << szName << " 소멸" << endl; //소멸전에 출력해야 잘나옴
				delete[] this->szName;
				
			}
			this->szName = new char[strlen(s.szName) + 1];
			strcpy(this->szName, s.szName);
			cout << szName << " 생성" << endl;

		}
		return *this;
	}

	Student& operator = (Student& s) {
		if (&s != this) {							//this는 포인터라서 타입이 안맞음 한글안깨지게 if문 줌
			this->nNo = s.nNo;
			if (this->szName != nullptr) {
				cout << szName << " 소멸" << endl;
				delete[] this->szName;
				
			}
			this->szName = new char[strlen(s.szName) + 1];
			strcpy(this->szName, s.szName);
			cout << szName << " 생성" << endl;

		}
		return *this;
	
	}

	~Student() {
		cout << nNo << "가 해제되었습니다." << endl;
		cout << szName << " 소멸" << endl;
		delete[] szName;
		
	}
};
int main() {
	Student A(1, "홍하나");
	Student B;
	B = A;
	strcpy(A.szName, "홍길동");
	strcpy(B.szName, "홍길동");
	A = A;
	A.PrintStudent();
	B.PrintStudent();
	//strcpy(B.szName, "홍길동");
	//B = A;
	////B.copy(A);
	//A = A;
	//A.PrintStudent();

	Student C(2,"장발장");
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

	//strcpy(A.szName, "홍길동");
	//A.PrintStudent();
	//B.PrintStudent();
 
	 
	//Student a(1, "강하나");
	//Student *p = new Student(2, "홍하나");
	//Student stu[10];
	//stu[0].nNo = 3;
	//stu[1].nNo=4;
	//strcpy(stu[1].szName, "배장화");
	//Student* stu1 = new Student[10];

	///*for (int i = 0; i < 10; i++) {
	//	stu1[i] = new Student; Student* stu[10] new 가 있어서 for문 안돌려도 됨
	//}*/

	//stu1[0].nNo = 5;
	//strcpy(stu1[0].szName, "연흥부");
	//stu1[1].nNo = 6;
	//strcpy(stu1[1].szName, "홍길동");
	//stu1[2].nNo = 7;
	//strcpy(stu1[2].szName, "신데렐라");
	//stu1[3].nNo = 8;
	//strcpy(stu1[3].szName, "백설공주");

	//delete p; //new 동적이라 지워야함.
	//delete[] stu1;
	return 0;
}