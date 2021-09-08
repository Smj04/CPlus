#include <iostream>
using namespace std;
class CPoint {
private:
	int x;
	int y;

public:
	CPoint(int x, int y) {
		this->x = x;
		this->y = y;
	}
	CPoint(const CPoint& p) {		//복사생성자
		x = p.x;
		y = p.y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};

class Rect {
public:
	CPoint p1;
	CPoint p2;

	Rect(CPoint p1, CPoint p2) :p1(p1), p2(p2) {
		
	}

	int area() {
		return abs((p1.getX() - p2.getX()) * (p1.getY() - p2.getY()));		//-로 나오는거방지하여 절댓값함수 abs()사용

	}
};
int main() {
	CPoint point1(10, 20);
	CPoint point2(20,15);
	
	Rect r(point1, point2);

	cout << r.area() <<endl;

	return 0;
}