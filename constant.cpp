#include<iostream>
using namespace std;
#define MAX_COUNT 100 //#define으로 선언하면 저 변수가 아예 100부터 시작. ;없음
//const 타입 MAX_COUNT = 100; 위랑 같음
#define MAX(a,b) a<b?a:b // (삼항 연산자) a가 b보다 작으면 a 크면 b
int main() {
	cout << MAX_COUNT << endl;
	int nMax = MAX(100, 200); 
	cout << nMax << endl;
}