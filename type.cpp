#include<iostream>
using namespace std;
int main() {
	char cMaxVal = 0x7F;

	unsigned char ucMaxVal = 0xFF;

	cout << "char형 범위(1바이트) : "
		<< (int)(char)(cMaxVal + 1) << "~"
		<< (int)cMaxVal << endl;

	cout << "unsigned char형 범위(1바이트) :"
		<< (int)(char)(ucMaxVal + 1) << "~"
		<< (int)ucMaxVal << endl;

}