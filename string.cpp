#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	const char* a = "Mirim School";
	const char* b = "Mirim Program";
	cout << strlen(a) << endl;
	cout << strlen(b) << endl;

	char c[10];
	strcpy(c, "My Home"); //� ���ڿ��� ���ڿ� �濡 �־��ٶ��� strcpy�Լ��� �����

	cout << c << endl;
	cout << strcmp(a, a) << endl;
}