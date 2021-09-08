#include <iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
};
void Point::setX(int x) {
	this->x = x;
}
void Point::setY(int y) {
	this->y = y;
}
int Point::getX() {
	return x;
}int Point::getY() {
	return y;
}
int main() {
	int x, y;
	cout << "ÁÂÇ¥ ÀÔ·Â : ";
	cin >> x >> y;
	Point p;
	p.setX(x);
	p.setX(y);
	cout << x << " ," << y << endl;


	return 0;
}