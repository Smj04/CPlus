#include <iostream>
using namespace std;
class Student {
private:
	int grade;
	int ban;
public:
	Student() {
		grade = 3;
		ban = 8;
		cout << "생성" << endl;
	}
	~Student(){}
	void setGrade(int grade) {
		this->grade = grade;
		cout << "소멸" << endl;
	}
		int getGrade() {
			return grade;
		}
};
int main() {
	unique_ptr<Student> pStudent(new Student); //스마트 포인터 delete안해도 누수안된다.
	cout << "학년 : " << pStudent->getGrade() << endl;
	pStudent->setGrade(2);
	cout << "학년 : " << pStudent->getGrade() << endl;
	return 0;
}