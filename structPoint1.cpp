#include <iostream>
using namespace std;

struct st { //구조체는 꼭 ;을 마감해야함
	//만약 변수를 선언한다면 ;은 한번만 써도 됨
	int x;
	int y;
};
int main() {
	st point = { 2,4 };
	st* Pst = &point;
	cout << Pst->x << ", " << (*Pst).y << endl;
	//Ps->x나 (*Pst).y나 결과값은 같음
}