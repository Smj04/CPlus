#include <iostream>
using namespace std;

int main() {
	int val1 = 3;
	double val2 = 3.14;
	cout << val1 + val2 << endl;
	cout << val1 + (int)val2 << endl; //메모리가 큰 double 우선으로 묵시적 형변환

	int up = 'A' + 1; //B        66
	char up = 65 + 1; //B UP은 char이기 때문       66
	cout << up;
	return 0;
}