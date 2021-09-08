#include <iostream>
using namespace std;

class Horse {
public:
	Horse() {cout << "Horse 생성자" << endl;}
	virtual ~Horse() { cout << "Horse 소멸자" << endl; }

	virtual void speak() { //virtual하면 형변환 안해도 된다. 오버라이딩 되어있으면 아들꺼를 수행한다.
		cout <<"히히힝~~"<<endl;
	}
};
class Bird {
public:
	Bird() { cout << "Bird 생성자" << endl; }
	~Bird() { cout << "Bird 소멸자" << endl; }
	void speak() {
		cout << "짹짹~~" << endl;
	}
	void fly() {
		cout << "날다" << endl;
	}
};
class Pegasus : public Bird, public Horse {		//호출 순서에 따라 생성자 호출이 달라진다. 
public:
	Pegasus() { cout << "Pegasus 생성자" << endl; }
	~Pegasus() { cout << "Pegasus 소멸자" << endl; }
	
	void speak() {
		cout << "페가수스 : 히히힝~~" << endl;
	}
};

int main() {
	//Pegasus peg; //페가수스 타입이라서 자기 메소드를 호출한다.
	//peg.speak();
	//peg.fly();

	Horse* obj1 = new Horse();
	obj1->speak();
	((Pegasus*)obj1)->fly();		//**********???????
	delete obj1;
	cout << "-------------------" << endl;


	Pegasus* obj2 = new Pegasus();
	obj2->speak(); //페가수스 : 히히힝
	obj2->fly();
	delete obj2;
	cout << "-------------------" << endl;

	Horse* obj3 = new Pegasus();
	// Pegasus* obj3 = new Horse(); Pegasus만큼 만들어서 Horse Pegasus만큼 쓴다는것 안된다.
	obj3->speak();	//페가수스 : 히히힝
	((Pegasus*)obj3)->fly();	//페가수스안에 fly()가 있어서 형변환하면 사용가능
	delete obj3;		//만든 이름 객체만 삭제가 된다.  아빠 소멸자에 virtual을 써주면 다 삭제를 해준다.
}