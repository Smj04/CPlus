#include  <iostream>
#include  <time.h>

using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point() {

	}
	Point(int x, int y) {
		cout << "�� ����" << endl;

		this->x = x;
		this->y = y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}



};


class Circle {
public:
	Point p;
	double r;
	const double PI = 3.141592;

	Circle() {}
	Circle(Point p, double area) {
		this->p = p;
		this->r = area;

	}
	void area() {
		double area = r * r * PI;	//������*������*PI
		cout << "���� ��ǥ(" << p.getX() << ", " << p.getY() << ")�� ������ " << r << "�� ���� ���� : " << area << endl;

	}
	~Circle() {

		cout << "���Ҹ�" << endl;

	}
};

int main() {
	srand((unsigned)time(0));

	Point p(rand() % 101, rand() % 101);

	int r = rand() % 10 + 1;

	Circle cir(p, r);
	cir.area();

	return 0;
}