#include<iostream>
//1+2=3, 3+3=6 1���� 20������ ���� ����Ͽ� ���ϸ鼭 �� ������ ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
using namespace std;
int main() {

	int sum = 1;

	for (int i = 2; i <= 20; i++) {
		
		cout << (i-1) << " + " << i << " = " << sum+i << endl;
		sum += i;
	}
	return 0;
	}

