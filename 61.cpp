#include <iostream>
using namespace std;
int main(void) {
	int*  ptr; //const�� ���̸� �� �ٲ�.
	int arr[4] = { 1,2,3,4 };
	ptr = arr;//const�� ���̸� �� �ٲ�.

	for (int i = 0; i < 4; i++)
		cout << arr[i] << " ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << *(ptr + i) << " "; //�Ʒ� arr[i]�� ����

	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << arr[i]; //�������� �ʱⰪ �� �ָ� 0���� ��� ��� *(arr+i)�� ���� ��ȣ
	cout << endl;

	////�߰�
	for (int i = 0; i < 4; i++)
		cout << ptr[i];
	
	cout << endl;

	ptr++;
	cout << ptr << endl;

	cout << arr << endl;

	
	
}
