#include <iostream>
using namespace std;
class Shape {

	int x;
	int y;
	static int count;
public:
	Shape(int x, int y): x(x),y(y) {
		cout << ++count << " 번째 도형 생성" << endl;
	}
	virtual void drawCalc() {
		cout << "좌표 : " <<  this->x << ", " << this->y << "이고 ";
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
		
		cout<< "너비 : "<<width << "높이 : " <<height<<"인 사각형의 면적 : "<<width*height<<endl;
	}
};
class Triangle : public Shape {
	int width, height;
public:
	Triangle(int x, int y, int width, int height) :width(width), height(height), Shape(x, y) {	
	}
	void drawCalc() {
		Shape::drawCalc();
		cout << "너비 : " << width << "높이 : " << height << "인 삼각형의 면적 : "<<width*height/2<<endl;
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
		cout << "원형의 면적 : "<<radius*radius* PI << endl;
	}
};
double Circle:: PI  = 3.14;	//정적 상수
int main() {
	Shape* ps1 = new Rectangle(1, 2, 34, 56);
	ps1->drawCalc();
	Shape* ps2 = new Triangle(1, 2, 34, 56);
	ps2->drawCalc();
	Shape* ps3 = new Circle(3,4,8);
	ps3->drawCalc();
}
