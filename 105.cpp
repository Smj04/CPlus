#include  <iostream>
using namespace std;

class Point {
public: //public: �� �������� ������ private�� ó��
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
	cout << "x ��ǥ�� " << x << endl;
	cout << "y ��ǥ�� " << y << endl;

}