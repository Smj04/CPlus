#include<iostream>
using namespace std;
class point {
private:
	int x;
	int y;
public:
	void setx(int x) { //set�� ���� ����
		this->x = x; //������� = �Ű�����; --> �Ű����� = �Ű�����
		//�� �ν� ��������� �־ ���� �ȵ�
		//�׷��� �̸� �ٸ��� �ֱ� �ȱ׷���this����
	}

	int getx() { 
		return x;
	}
	void sety(int yy) {
		y = yy;
	}
	int gety() {
		return y;
	}
};

int main() {
	int x, y;
	cout << "��ǥ�Է� : ";
	cin >> x >> y;
	point p; //��ü ����
	p.setx(x);
	p.sety(y);
	cout << "��(" << p.getx() << ", " << p.gety() << ") �׸���" << endl;
}