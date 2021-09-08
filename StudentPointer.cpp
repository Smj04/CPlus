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
		cout << "매개변수가 없는 생선자" << endl;
	}
	Student(int nO, const char* pname) {
		nNumber = nO;
		strcpy(sName, pname);
		cout << "매개변수가 두개인 생선자" << endl;
	}
	void print_Student() {
		cout << "nNumber : " << nNumber << "\tnName : " << sName << endl;
	}
	~Student() {
		cout << "이름 : " << sName << "삭제 당했습니다." << endl;
		delete Student::sName;
	}
};
int main() {
	system("color F0");
	Student st1;
	st1.nNumber = 1;
	strcpy(st1.sName, "하나하나하나하나하나");
	sizeof(st1);

	Student st2(2, "홍길동");
	st1.print_Student();
	st2.print_Student();

	/*Student st3("배장화");*/

	Student* st3 = new Student();
	st3->nNumber = 3;
	strcpy(st3->sName, "연흥부");
	//데이터에 삽입이나 삭제가 발생할 경우가 생기는 데이터는 동적할당이 유리하다. 
	//그러나 그런 일이 없을 경우 정적 할당
}