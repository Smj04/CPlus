#include<iostream>
using namespace std;

struct Point {
	int x;
	int y;

	void Print() {
		cout << "x 좌표 : " << x << endl;
		cout << "y 좌표 : " << y << endl;
	}// 메서드
};
int main() {
	Point p = { 1,2 }; //객체(?)와 구조체 섞인 형태
	//구조체 이름 이름 = {들어갈 값};
	//저 중괄호 안에는 구조체 멤버 변수 값들이 옴
	p.Print();
	//포인터로 부르고 싶다면
	
	Point* Ppoint = &p; //Ppoint 변수에 p주소값 넣음
	(*Ppoint).Print();
}