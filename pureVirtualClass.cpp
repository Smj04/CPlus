#include <iostream>
using namespace std;
class Animal {
public:
	virtual ~Animal() {} //���� �Ҹ���
	virtual void SoundSpeak() = 0;	//�������� Ŭ������ ��ü�� ���� �� ����!
	virtual void EatDiets(const char* eat) const = 0;
	virtual void SoundSpeak() {
		
	}
	virtual void EatDiets(const char* eat)const {
		
	}

};
class Dog : public Animal {
public :
	//�ݵ�� ������
	virtual void SoundSpeak() {
		cout << "���Ҹ� �۸�  ";
	}
	virtual void EatDiets(const char* eat)const {
		cout << eat << endl;
	}
};
class Cat : public Animal {
public:
	//�ݵ�� ������
	virtual void SoundSpeak() {
		cout << "����� �߿�  ";
	}
	virtual void EatDiets(const char* eat)const {
		cout << eat << endl;
	}
};
int main(void) {
	Dog dog;
	dog.SoundSpeak();
	dog.EatDiets("�� ���");

	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("����� ���");

	
} 