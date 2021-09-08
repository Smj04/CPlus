
#include<iostream>
using namespace std;

class Student {
public:
	int nNo;
	char szName[20];

	Student() {
		int nNo = 0, char szName[0] = 0;
		cout << "매개변수 없는 생성자" << endl;
	}
	Student(int nNo, char *pName) {
		const char* pName;
		strcpy(pName, szName);
		cout << "매개변수 두개인 생성자" << endl;
	}
	void printStudent() {
		cout << nNo << endl;
		cout << szName << endl;
	}
	~Student() {
		cout << szName << endl;
		delete []st3; //free
	//delete 는 new랑 짝꿍이다
	}
};
int main(){
	Student st1; //정적할당
	//cout << sizeof(st1)<<endl;
	st1.nNo = 1;
	strcpy(st1.szName, "송하나");
	Student st2 = ("홍길동");
	st1.printStudent();
	st2.printStudent();
	Student* st3 = new Student(3, "연흥부");//동적할당 //malloc()
	st3->printStudent();

}