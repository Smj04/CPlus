#include <iostream>
using namespace std;

int main() {
	int val1 = 3;
	double val2 = 3.14;
	cout << val1 + val2 << endl;
	cout << val1 + (int)val2 << endl; //�޸𸮰� ū double �켱���� ������ ����ȯ

	int up = 'A' + 1; //B        66
	char up = 65 + 1; //B UP�� char�̱� ����       66
	cout << up;
	return 0;
}