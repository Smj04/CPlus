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
		cout << "����" << endl;
	}
	~Student(){}
	void setGrade(int grade) {
		this->grade = grade;
		cout << "�Ҹ�" << endl;
	}
		int getGrade() {
			return grade;
		}
};
int main() {
	unique_ptr<Student> pStudent(new Student); //����Ʈ ������ delete���ص� �����ȵȴ�.
	cout << "�г� : " << pStudent->getGrade() << endl;
	pStudent->setGrade(2);
	cout << "�г� : " << pStudent->getGrade() << endl;
	return 0;
}