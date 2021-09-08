#include<iostream>
using namespace std;

#define multiple_define(A) ((A)*(A))
int multiple_inline(int A);
int main() {
	int a = 3;
	cout << "inline 함수의 값 : " << multiple_inline(++a) << endl;
	a = 3;
	cout << "define 매크로의 값은 : " << multiple_define(++a) << endl;
	//((++a)*(++a))결과와 같다. ++이 우선순위가 높음
	return 0;
}
inline int multiple_inline(int A)
{
	return A * A;
}