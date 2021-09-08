#include <iostream>
using namespace std;
class Employee {
public:
	int salary = 3000;
	const char* name = "홍길동";
	Employee(int _sal, const char* _name); //매개변수를 메인에서 
	//받아서 할당
	void Ms();
};
Employee::Employee(int salary, const char* name) {
	this->salary = salary;
	this->name = name; //매개변수와 이름 같으면 this->를 씀
	cout << "객체 생성" << endl;
}
void Employee::Ms() {

	cout << "이름 : " << name << endl;
	cout << "연봉 : " << salary << endl;
}

int main() {
	
	Employee e1 = { 5678,"김미림" }; //괄호 써도 됨
	
	e1.Ms();
	return 0;

}
