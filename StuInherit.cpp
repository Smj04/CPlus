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
	//Grade를 위임하기 대신해주는 것(.~.~)
};


int main() {

	Student stu1;
	stu1.id = 1111;
	stu1.name = "홍길동";

	Student stdGrd;

	Std_Grd1 stu2;
	stu2.id = 2222;
	stu2.name = "전우치";
}