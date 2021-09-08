#include <iostream>
using namespace std;

class Horse {
public:
	Horse() {cout << "Horse ������" << endl;}
	virtual ~Horse() { cout << "Horse �Ҹ���" << endl; }

	virtual void speak() { //virtual�ϸ� ����ȯ ���ص� �ȴ�. �������̵� �Ǿ������� �Ƶ鲨�� �����Ѵ�.
		cout <<"������~~"<<endl;
	}
};
class Bird {
public:
	Bird() { cout << "Bird ������" << endl; }
	~Bird() { cout << "Bird �Ҹ���" << endl; }
	void speak() {
		cout << "±±~~" << endl;
	}
	void fly() {
		cout << "����" << endl;
	}
};
class Pegasus : public Bird, public Horse {		//ȣ�� ������ ���� ������ ȣ���� �޶�����. 
public:
	Pegasus() { cout << "Pegasus ������" << endl; }
	~Pegasus() { cout << "Pegasus �Ҹ���" << endl; }
	
	void speak() {
		cout << "�䰡���� : ������~~" << endl;
	}
};

int main() {
	//Pegasus peg; //�䰡���� Ÿ���̶� �ڱ� �޼ҵ带 ȣ���Ѵ�.
	//peg.speak();
	//peg.fly();

	Horse* obj1 = new Horse();
	obj1->speak();
	((Pegasus*)obj1)->fly();		//**********???????
	delete obj1;
	cout << "-------------------" << endl;


	Pegasus* obj2 = new Pegasus();
	obj2->speak(); //�䰡���� : ������
	obj2->fly();
	delete obj2;
	cout << "-------------------" << endl;

	Horse* obj3 = new Pegasus();
	// Pegasus* obj3 = new Horse(); Pegasus��ŭ ���� Horse Pegasus��ŭ ���ٴ°� �ȵȴ�.
	obj3->speak();	//�䰡���� : ������
	((Pegasus*)obj3)->fly();	//�䰡�����ȿ� fly()�� �־ ����ȯ�ϸ� ��밡��
	delete obj3;		//���� �̸� ��ü�� ������ �ȴ�.  �ƺ� �Ҹ��ڿ� virtual�� ���ָ� �� ������ ���ش�.
}