#include <iostream>
using namespace std;
int main() {
	short value = 10;
	void* pValue = nullptr; //void*로 하면 *pValue적힌곳 다 에러남. 무조건 (int*)형변환

	pValue = &value; //10
	cout << "pValue = " << pValue << endl;
	cout << "*pValue = " << *(short*)pValue << endl;
	cout << "value = " << value << endl;
	*(short*)pValue = 20;
	cout << "pValue = " << pValue << endl;
	cout << "*pValue = " << *(short*)pValue << endl;
	cout << "value = " << value << endl;
	return 0;
}