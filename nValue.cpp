#include<iostream>
int main() { //전역변수는 ::을 붙임.
	using namespace std;
	int nValue = 100;
	void subFunc() {
		int nVal = 20;
		cout << "subFunc::전역변수:" << nValue << endl;
		cout << "subFunc::지역변수:" << nValue << endl;
		nValue = 200;
		nVal = 10;
		cout << "subFunc::전역변수:" << nValue << endl;
		cout << "subFunc::지역변수:" << nValue << endl;
	}
	int main() {
		int nValue = 10;
		cout << "main::전역변수:" << ::nValue << endl;
		cout << "main::지역변수:" << ::nValue << endl;
		subFunc();
		cout << "main::전역변수:" << ::nValue << endl;
		cout << "main::지역변수:" << ::nValue << endl;
	return 0;
}