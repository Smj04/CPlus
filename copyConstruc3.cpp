#include <iostream>
#include<cstring>
using namespace std;
class Person {
	//private
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname); //얕은 복사로 디버깅 에러
		age = myage;
	}
	//Person(Person& s){
	//	this->age = s.age;{
	//	//이름이 같으면 s(s) 이런식 앞에가 this역할
	//}
	void ShowPerson() const {
		cout << "이름 " << name << " ";
		cout << "나이 " << age << " ";
	}
	~Person() {
		delete []name;
		cout << "called destructor" << endl;
	}
};
int main() {
	Person man1("Lee Mee Rim", 27);		//매개변수 2개라 두번째 생성자 호출
	Person man2(man1);
	man1.ShowPerson();
	man2.ShowPerson();
	return  0;
}