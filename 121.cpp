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
	cout << "������ " << radius << " �� ����" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}
Circle::~Circle() {
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}
int main() {
	Circle c1;
	Circle c2(50);
	//cout << sizeof(Circle); //radus�� int�ϳ��ϱ� 4����Ʈ

	return 0;
}