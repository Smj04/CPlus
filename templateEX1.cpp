#include<iostream>
using namespace std;

template<typename T>
void swapTest(T &x, T &y){							//typename 변수는 가능하나 대문자로 쓰기!
	T temp;
	temp = x;
	x = y;
	y = temp;
}



int main() {
	int x = 10, y = 20;
	double x1 = 10.23, y1 = 20.56;
	cout << "x = " << x << ", y = " << y << endl;
	swapTest<int>(x,y);								 //틀은 그대로 <>안에 원하는 타입으로 변환가능
	cout << "x = " << x << ", y = " << y << endl;

	cout << "x1= " << x1 << ", y1 = " << y1 << endl;

	swapTest<double>(x1, y1);
	cout << "x1= " << x1 << ", y1 = " << y1 << endl;
}