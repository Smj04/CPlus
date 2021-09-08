#include<iostream>
using namespace std;
// 대소문자 상관없이 A는1B는 2
int main() {
	char alp;
	cout << "알파벳 한 문자 입력 : ";
	cin >> alp;
	

	if (alp >= 'a' && alp <= 'z')
	{
		alp = alp - 32; //소문자
	}
	else "ERROR";
		cout << (int)alp - 'A' + 1 << endl;
		//대문자
	
	return 0;
}