#include<iostream>
using namespace std;
int main() {
	int nArray[10] = { 10,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;
	pArray = nArray;
	cout << nArray[0] << "." << *pArray << endl;
	*pArray = 10;
		cout << nArray[0] << "." << *pArray <<endl;
	
		pArray = &nArray[1];
		cout << nArray[0] << "." << *pArray << endl;
		pArray++;
		cout << nArray[0] << "." << *pArray << endl;
		pArray = nArray;
		cout << *pArray << "." << nArray[0] << endl;
		cout << pArray[0] << "." << *nArray << endl;
	return 0;
}