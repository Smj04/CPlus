#include <iostream>
using namespace std;
class Car {
	int ton, price;
protected:											
	static int count;
public:
	Car() {
		ton = 0;
		price = 1000;
		count++;
	}
	Car(int ton, int price) {
		this->ton = ton;
		this->price = price;
		count++;
		
	}
	static int getCount() {
		return count; //�����Լ�
	}
	~Car() {
		count--;
		cout << "�Ҹ�� �ڵ����� �� : "<<count << endl;
	}
};
int Car::count = 0; //�������� �ʱ�ȭ�� Ŭ���� �ۿ��� �ʱ�ȭ�Ѵ� �ȿ��� �����Ҷ��� static But, ���� X
int main() {
	//cout << "������ �ڵ����� �� : " << Car::count << endl; //��ü �������̶�  �� Car::��������� ��
	Car car1;
	cout << "������ �ڵ����� �� : " << car1.count << endl; //Car::count�� car2.count����
	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << car2.getCount() << endl;
	cout<< endl;
	return 0;
}