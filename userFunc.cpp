#include <iostream>
using namespace std;
void print(int a, int b) {
	cout << a + b << endl;
}
	int main() {
		char str[] = "100";
		//int a = 200;
		int b = atoi(str); //String�� int�� �ٲٴ� �Լ� 
		print(a, b);
	}
