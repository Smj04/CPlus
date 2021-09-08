#include <iostream>
using namespace std;
int main() {
	int i, num, num1, num2, num3;
	int sum;
	cout << "100~999의 암스트롱 수 : " << endl;
	for (num = 100; num < 1000; num++)
	{
		num1 = num / 100; //첫번째 자리
		num2 = num / 10 - num1 * 10;  //두번째 자리
		num3 = num - 100 * num1 - 10 * num2;  //세번째 자리
		sum = num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3;
		if (sum == num)
			

					cout << num << endl;
		
	}
}
	
		

