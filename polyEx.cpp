#include <iostream>
using namespace std;
class Ride {
public:
	virtual void rideFunc() {
		cout << "Ÿ��" << endl;				// virtual�� ���� ������ ����� ���� -> �����Լ�
	}										//�ƿ�����°� �Ұ��ϰ� �����ֵ� �������� �������̵�����
	virtual void Number() {}
};

class BusRide : public Ride {
public:
	int age;
	void rideFunc() {					
		cout << "������ Ÿ��" << endl;				//�������̵� ���� ������ Ÿ�ٷ� ���									                 ���� virtual�� ���� �Ƶ��� �Լ��� �Ⱦ��� �ƺ����� ��( ���� ����_)
	}
	void Number() {
		cout << "152" << endl;			//number�� �ƺ��ʿ� ��� �� �������̵� ���� X ȣ���� �ȵ�
	}
};
class AirRide : public Ride {
public :
	int ton;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
	}
};

int main() {
	Ride* r1 = new BusRide();						//�ڽ�Ÿ���̱⶧���� �ڽ��� �켱�̴� virtual�� ���� �ڽĸ޼ҵ�� ��밡��(�θ�Ŭ������ �̸��� �Ȱ��� �Լ��� ���������Ѵ� +virtual)
	r1->rideFunc();
	delete r1;
	
	Ride* r2 = new AirRide();
	r2->rideFunc();						//delete�Ⱦ��� ������ unique ����Ʈ������ ����
	delete r2;


	Ride* r3 = new Ride();
	r3->rideFunc();
	delete r3;
	return 0;
}