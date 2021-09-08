#include<iostream>
using namespace std;

class Point {

public:
	int x;
	int y;

	Point() {
		cout << "기본 생성자" << endl;
	}
	~Point() {
		cout << x << ", " << y << "기본 소멸자" << endl; //정적이면 거꾸로 죽음 delete 안시켜도 알아서 죽음
		//동적이면 누수, 장점 : 내가 죽이고 싶을 때 죽이기 가능(ex. 게임 캐릭터 죽기)
	}
};
int main() {
	Point *arr[5];
	//arr[0] = new Point(); 기본
	for (int i = 0; i < 5; i++) {
		arr[i] = new Point(); //i만큼 동적할당 delete도 5번 
		cin >> arr[i]->x;
		cin >> arr[i]->y; //포인터 객체배열이라서 .대신 -> x위치를 포인터메모리 할당을 해줘야한다
	}
	for (int i = 0; i < 5; i++) {
		delete arr[i]; //포인터 동적할당은 delete로 사용, 배열 0번방부터 순서대로 죽음.
	}
}