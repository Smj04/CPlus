#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>

using namespace std;
class Point {
private:
	int x;
	int y;

public:
	Point() {
		cout << "�� ����" << endl;
	}
	Point(int xpos,int ypos) : x(xpos),y(ypos){
	
	}

	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};

class Line {
	Point p1;
	Point p2;
	
	char* name;

public:
	Line() {
		cout << "�� ����" << endl;
	}
	Line(Point a, Point b, char* n) :p1(a), p2(b) {
		cout << "�� ����" << endl;
		name = new char[strlen(n) + 1]; //�̸����� ����ֱ�
		strcpy(name, n);
	}
	void Print() {

		double width = sqrt((p2.getX() - p1.getX()   * p2.getX() - p1.getX()) + (p2.getY() - p1.getY() * p2.getY() - p1.getY()));
		cout << "��(" << p1.getX()<<", " << p1.getY() << ")�� ��(" << p2.getX()<<", " << p2.getY() <<")�� �մ� "<<name<<"�� ���� : "<<width<< endl;
	}
	~Line() {
		cout << "���Ҹ�" << endl;
		delete[] name;
	}
};

int main() {
	srand((unsigned)time(0));
	char* name = new char[11];
	cout << "������ ���� �Է��ϼ���."<<endl;
	cin >> name;

	Point p1(rand()% 61-30, rand() % 61 - 30);
	Point p2(rand() % 61 - 30, rand() % 61 - 30);
	
	Line line(p1, p2, name);
	
	line.Print();
	
	return 0;
}