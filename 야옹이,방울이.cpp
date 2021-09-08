#include<iostream>
using namespace std;
class Cat {
private: 
	int* pAge = new int; //동적 선언
	const char* Pname = new char; //동적 선언
public:
	Cat() {
		*pAge = 18;
		Pname = "야옹이";
	}

	~Cat() {
		delete pAge;
		delete Pname;
	}
	void setAge(int age) {
		*pAge = age;
	}
	int getAge() {
		return *pAge;
	}

	void setName(const char* name) {
		Pname = name;
	}
	char* getName() {
		return (char*)Pname;
	}
};
int main() {
	Cat* pCat = new Cat; // 포인터 객체
	cout << "고양이의 나이 : " << pCat->getAge() << ", " << "고양이의 이름 : " << pCat->getName() << endl; // 포인터니까 -> or /(*)
	pCat->setAge(20);
	pCat->setName("방울이");
	cout << "고양이의 나이 : " << pCat->getAge() << ", " << "고양이의 이름 : " << pCat->getName() << endl;
	return 0;
}