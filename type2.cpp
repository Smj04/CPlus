#include<iostream>
using namespace std;
int main() {
	char cCode = 'a';
	int iCode;
	iCode = 'A';
	

	cout << (char)iCode << "->" << iCode << endl;
	iCode = iCode + 1;
	cout << (char)iCode << "->" << iCode << endl;
	iCode = iCode + 1;
	cout << (char)iCode << "->" << iCode << endl;
	cCode = 'a';
	cout << (char)iCode << "->" << cCode << endl;
	cCode = cCode+1;
	cout << cCode << "->" << cCode << endl;
	cCode = cCode + 1;
	cout << cCode << "->" << cCode << endl;
	return 0;
}