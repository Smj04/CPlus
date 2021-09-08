#include<iostream>
using namespace std;

class Point {

public :
	int x;
	int y;
	Point() {
		cout << "기본 생성자" << endl;
	}
	~Point() {
		cout << x<<", " <<y<<"기본 소멸자" << endl; //정적이면 거꾸로 죽음 delete 안시켜도 알아서 죽음
	}
};
int main() {
	Point arr[5];
	for(int i = 0; i<5; i++){
	cin >> arr[i].x;
	cin >> arr[i].y;
	}
}