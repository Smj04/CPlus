#include <iostream>
using namespace std;
class Ride {
public:
	virtual void rideFunc() {
		cout << "타다" << endl;				// virtual을 쓰고 내용을 비워도 가능 -> 가상함수
	}										//아예지우는건 불가하고 남아있되 가상으로 오버라이딩으로
	virtual void Number() {}
};

class BusRide : public Ride {
public:
	int age;
	void rideFunc() {					
		cout << "버스를 타다" << endl;				//오버라이딩 되지 않으면 타다로 출력									                 만약 virtual을 쓰고 아들쪽 함수를 안쓰면 아빠꺼가 뜸( 논리적 오류_)
	}
	void Number() {
		cout << "152" << endl;			//number는 아빠쪽에 없어서 즉 오버라이딩 되지 X 호출이 안됨
	}
};
class AirRide : public Ride {
public :
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}
};

int main() {
	Ride* r1 = new BusRide();						//자식타입이기때문에 자식이 우선이다 virtual을 쓰면 자식메소드로 사용가능(부모클래스에 이름이 똑같은 함수를 만들어줘야한다 +virtual)
	r1->rideFunc();
	delete r1;
	
	Ride* r2 = new AirRide();
	r2->rideFunc();						//delete안쓰고 싶으면 unique 스마트포인터 쓰기
	delete r2;


	Ride* r3 = new Ride();
	r3->rideFunc();
	delete r3;
	return 0;
}