#include <iostream>
using namespace std;

class Student {
public:
	int id;
	string name;
};
class StdGrd : public Student{
	
};
class Grade {
public:
	int kor;
	int eng;
	int math;
};
class Std_Grd1 : public Student {
	//Grade�� �����ϱ� ������ִ� ��(.~.~)
};


int main() {

	Student stu1;
	stu1.id = 1111;
	stu1.name = "ȫ�浿";

	Student stdGrd;

	Std_Grd1 stu2;
	stu2.id = 2222;
	stu2.name = "����ġ";
}