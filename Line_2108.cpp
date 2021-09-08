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
		cout << "선 생성" << endl;
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
		cout << "선 생성" << endl;
	}
	Line(Point a, Point b, char* n) :p1(a), p2(b) {
		cout << "선 생성" << endl;
		name = new char[strlen(n) + 1]; //이름방을 잡아주기
		strcpy(name, n);
	}
	void Print() {

		double width = sqrt((p2.getX() - p1.getX()   * p2.getX() - p1.getX()) + (p2.getY() - p1.getY() * p2.getY() - p1.getY()));
		cout << "점(" << p1.getX()<<", " << p1.getY() << ")와 점(" << p2.getX()<<", " << p2.getY() <<")를 잇는 "<<name<<"의 길이 : "<<width<< endl;
	}
	~Line() {
		cout << "선소멸" << endl;
		delete[] name;
	}
};

int main() {
	srand((unsigned)time(0));
	char* name = new char[11];
	cout << "생성할 선을 입력하세요."<<endl;
	cin >> name;

	Point p1(rand()% 61-30, rand() % 61 - 30);
	Point p2(rand() % 61 - 30, rand() % 61 - 30);
	
	Line line(p1, p2, name);
	
	line.Print();
	
	return 0;
}