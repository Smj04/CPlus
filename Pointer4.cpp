#include <iostream>
using namespace std;
int main() {
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr; 
	
	pArray = nArray; //nArray�� pArray�� �� �ٲ� �����ʹ� ������ ���������� �迭���� ó�� �� �ּҰ��� �״��
	cout << *pArray << ", " << nArray[0] << endl;
	*pArray = 10;
	cout << *pArray << ", " << nArray[0] << endl;
	pArray = &nArray[1];
	cout << *pArray << ", " << nArray[1] << endl;
	cout << sizeof(pArray) << endl;
	cout << sizeof(*pArray) << endl;
	cout << sizeof(nArray) << endl;

	/*int count = sizeof(nArray) / sizeof(int);
	for (int i = 0; i < count; i++) {
		cout << i << ":" << nArray[i] << endl;

	}
	cout << sizeof(nArray) << endl;*/
	return 0;
}