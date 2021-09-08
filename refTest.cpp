#include <iostream>
//call by val�� ���� �ٲ��� ����
//call by pointer�� ���� �ٲ� *
using namespace std;
void swapV(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;

}
void swapP(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void swapR(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int main() {
	int a= 10, b = 20;

	swapV(a, b);
	cout << a << " " << b << endl;

	swapP(&a, &b);
	cout << a << " " << b << endl;

	swapR(a,b);
	cout << a << " " << b << endl;
	return 0;
}
