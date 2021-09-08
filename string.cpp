#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	const char* a = "Mirim School";
	const char* b = "Mirim Program";
	cout << strlen(a) << endl;
	cout << strlen(b) << endl;

	char c[10];
	strcpy(c, "My Home"); //어떤 문자열을 문자열 방에 넣어줄때는 strcpy함수를 써야함

	cout << c << endl;
	cout << strcmp(a, a) << endl;
}