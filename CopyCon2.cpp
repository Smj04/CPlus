#include <iostream>
using namespace std;		//�������� - > �⺻���簡 �ֱ⶧���� ����(�����͵� �ȽἭ ����~~!!!) ���� ���� : this.x = new char[strlen(x)+1; strcpy(this.x,x);
class Point {
	int x, y;
public:
	Point(int _x, int _y) {
		x = _x;
		y = _y;			//Point(const Point& p) {
						//x = p.x;
						//y = p.y;			�̰� ��������
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