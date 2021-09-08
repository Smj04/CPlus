#include<iostream>
using namespace std;
class point {
private:
	int x;
	int y;
public:
	void setx(int x) { //set은 리턴 없음
		this->x = x; //멤버변수 = 매개변수; --> 매개변수 = 매개변수
		//로 인식 멤버변수는 멀어서 값이 안들어감
		//그래서 이름 다르게 주기 안그러면this쓰기
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
	cout << "좌표입력 : ";
	cin >> x >> y;
	point p; //객체 선언
	p.setx(x);
	p.sety(y);
	cout << "점(" << p.getx() << ", " << p.gety() << ") 그리기" << endl;
}