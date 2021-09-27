#include <iostream>
using namespace std;
class Shape {

	int x;
	int y;
	static int count;
public:
	Shape(int x, int y): x(x),y(y) {
		cout << ++count << " ��° ���� ����" << endl;
	}
	virtual void drawCalc() {
		cout << "��ǥ : " <<  this->x << ", " << this->y << "�̰� ";
	}
};
int Shape ::count = 0;
class Rectangle : public Shape {

	int width;
	int height;
public:
	Rectangle(int x, int y, int width, int height) :width(width),height(height), Shape(x, y){
		
	}
	void drawCalc() {
		Shape::drawCalc();
		
		cout<< "�ʺ� : "<<width << "���� : " <<height<<"�� �簢���� ���� : "<<width*height<<endl;
	}
};
class Triangle : public Shape {
	int width, height;
public:
	Triangle(int x, int y, int width, int height) :width(width), height(height), Shape(x, y) {	
	}
	void drawCalc() {
		Shape::drawCalc();
		cout << "�ʺ� : " << width << "���� : " << height << "�� �ﰢ���� ���� : "<<width*height/2<<endl;
	}
};
class Circle : public Shape {
	double radius;
	
public:
	static  double PI;
	Circle(int x, int y, double radius) :radius(radius), Shape(x, y) {	
	}
	void drawCalc() {
		Shape::drawCalc();
		cout << "������ ���� : "<<radius*radius* PI << endl;
	}
};
double Circle:: PI  = 3.14;	//���� ���
int main() {
	Shape* ps1 = new Rectangle(1, 2, 34, 56);
	ps1->drawCalc();
	Shape* ps2 = new Triangle(1, 2, 34, 56);
	ps2->drawCalc();
	Shape* ps3 = new Circle(3,4,8);
	ps3->drawCalc();
}
