#include <iostream>
using namespace std;


void jungjuk() {
	int a = 0;
	cout << "���� ���� a�� " << a << endl;
	a++;
}

int main() {

	const int b = 3;
	b = 5;


	jungjuk();
	jungjuk();
	jungjuk();

}