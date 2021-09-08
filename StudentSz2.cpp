
#include<iostream>
using namespace std;

class Student {
public:
	int nNo;
	char* szName[20];

	Student() {
		int nNo = 0, char szName = 0;
		cout << "매개변수 없는 생성자" << endl;
	}
	Student(int nNo, char* pName) {
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
		delete[]st3; //free
	//delete 는 new랑 짝꿍이다
	}
};


int main() {

	Student st1; // 정적 : stact 영역에 생긴다. 프로그램이 끝날 때 사라짐

	cout << sizeof(st1) << endl;

	st1.nNo = 1;
	strcpy(st1.szName, "송하나");

	Student st2(2, "홍길동");

	// Student st3("대장한");

	Student* st3 = new Student(3, "연흥부"); // 동적 : 실제 메모리가 heap영역에 생긴다. 언제든지 삭제 가능


	st1.printStudent();
	st2.printStudent();
	st3->printStudent();

	delete st3; // new와 짝궁이다. (갯수 꼭 맞춰주어야함)
	// 정적으로 만든 애들은 프로그램이 끝나면 알아서 없어지지만, 동적으로 만든 애들은 직접 삭제시켜 주어야 한다.
	// malloc -> new , free -> delete 느낌이다.

	return 0;
}
//int main() {
//	Student st1; //정적할당
//	cout << sizeof(st1)<<endl;
//	st1.nNo = 1;
//	st1.szName = new char[20];
//
//	strcpy(st1.szName, "송하나");
//	Student st2 = (2, "홍길동");
//	Student* st3 = new Student(3, "연흥부");//동적할당 //malloc()
//
//	st1.printStudent();
//	st2.printStudent();
//	st3->printStudent();
//
//	delete st3;
//	//+1쓰기  strelen+1


//}