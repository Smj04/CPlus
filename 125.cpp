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
		return count; //정적함수
	}
	~Car() {
		count--;
		cout << "소멸된 자동차의 수 : "<<count << endl;
	}
};
int Car::count = 0; //정적변수 초기화는 클래스 밖에서 초기화한다 안에다 선언할때는 static But, 밖은 X
int main() {
	//cout << "생성된 자동차의 수 : " << Car::count << endl; //객체 생성전이라  걍 Car::멤버변수로 씀
	Car car1;
	cout << "생성된 자동차의 수 : " << car1.count << endl; //Car::count와 car2.count셈셈
	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << car2.getCount() << endl;
	cout<< endl;
	return 0;
}