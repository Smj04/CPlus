#include<iostream>
//1+2=3, 3+3=6 1부터 20까지의 수를 계속하여 더하면서 그 때마다 합의 결과를 출력하는 프로그램을 작성하시오
using namespace std;
int main() {

	int sum = 1;

	for (int i = 2; i <= 20; i++) {
		
		cout << (i-1) << " + " << i << " = " << sum+i << endl;
		sum += i;
	}
	return 0;
	}

