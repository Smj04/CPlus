#include <iostream>
using namespace std;		//얕은복사 - > 기본복사가 있기때문에 가능(포인터도 안써서 가능~~!!!) 깊은 복사 : this.x = new char[strlen(x)+1; strcpy(this.x,x);
class Point {
	int x, y;
public:
	Point(int _x, int _y) {
		x = _x;
		y = _y;			//Point(const Point& p) {
						//x = p.x;
						//y = p.y;			이게 숨어있음
						//	}
	}
	void ShowData() {
		cout << x << " " << y << endl;
	}
};
int main(void) {
	Point x1(1, 2);
	x1.ShowData();
	Point x2(x1);
	x2.ShowData();
}