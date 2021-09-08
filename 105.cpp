#include  <iostream>
using namespace std;

class Point {
public: //public: 이 적혀있지 않으면 private로 처리
	int x;
	int y;
	void Print();
};
int main() {
	Point m1 = { 1,2 };
	m1.Print();
	return 0;
}
void Point::Print() {
	cout << "x 좌표는 " << x << endl;
	cout << "y 좌표는 " << y << endl;

}