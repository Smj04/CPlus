#include<iostream>
using namespace std;
// 대소문자 상관없이 A는1 B는 2
int main() {
	char alt;
	cout << "알파벳 한 문자 입력 : ";
	cin >> alt;


	if (alt >= 'a' && alt <= 'z')
	{
		alt = alt - 32; // 소문자 조건
	}
	cout << (int)alt - 'A' + 1 << endl; 


	return 0;
}