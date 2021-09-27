#include <iostream>
using namespace std;
class Animal {
public:
	virtual ~Animal() {} //가상 소멸자
	virtual void SoundSpeak() = 0;	//순수가상 클래스로 객체를 만들 수 없다!
	virtual void EatDiets(const char* eat) const = 0;
	virtual void SoundSpeak() {
		
	}
	virtual void EatDiets(const char* eat)const {
		
	}

};
class Dog : public Animal {
public :
	//반드시 재정의
	virtual void SoundSpeak() {
		cout << "개소리 멍멍  ";
	}
	virtual void EatDiets(const char* eat)const {
		cout << eat << endl;
	}
};
class Cat : public Animal {
public:
	//반드시 재정의
	virtual void SoundSpeak() {
		cout << "고양이 야옹  ";
	}
	virtual void EatDiets(const char* eat)const {
		cout << eat << endl;
	}
};
int main(void) {
	Dog dog;
	dog.SoundSpeak();
	dog.EatDiets("개 사료");

	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("고양이 사료");

	
} 