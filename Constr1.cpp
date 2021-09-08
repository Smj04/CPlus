#include <iostream>
using namespace std;
class Student {
private :
	int nHakbun;
	const char* sName; //접근X
public:
	Student(int nHakbun, const char* sName);
	void show(); // 프로토타입
};
Student::Student(int nHakbun, const char* sName) { //생성자
	nHakbun = 1234;
	sName = "이사랑"; 
	this->nHakbun = nHakbun;
	this->sName = sName;
	cout << "멤버변수 학번이 등록되었습니다." << endl; //객체가 생길때마다 증가

}
void Student::show() {
	cout << "학번은 " << nHakbun << "입니다. " << endl;
	cout << "이름은 " << sName << "입니다." << endl;
}
int main() {
	//Student student1; //객체 생성 변수선언처럼 함
	//student1.show();
	//Student student2 = { 5678, "김미림" };
	//Student2.show();
	Student stu[3] = {
		Student(), Student(1111,"강아지"), Student(2222,"망아지")
	};
	for (int i = 0; i < 3; i++) {
		stu[i].show();
	}
	return 0;
}