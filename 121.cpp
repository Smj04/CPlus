#include<iostream>
using namespace std;
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
};
Circle::Circle() {
	radius = 10;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}
int main() {
	Circle c1;
	Circle c2(50);
	//cout << sizeof(Circle); //radus가 int하나니까 4바이트

	return 0;
}