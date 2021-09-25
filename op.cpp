#include <iostream>
using namespace std;
int add(int x, int y) {
	return x + y;
};
int substract(int x, int y) {
	return x - y;
};
int multiply(int x, int y) {
	return x * y;
};
int main() {
	int x, y;
	cin >> x;
	cin >> y;
	cout << "1 : add, 2 : substract, 3 : multiply" << endl;
	int op;
	int(*funcptr)(int, int) = nullptr;
	cin >> op;

	switch (op)
	{
	case 1: funcptr = add; break;
	case 2: funcptr = substract;  break;
	case 3: funcptr = multiply; break;

		
	}
	cout << funcptr(x,y) << endl;
}