#include <iostream>
using namespace std;
int main() {
	short nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	short* pArray = nullptr;
	cout << pArray << endl;
	pArray = nArray;
	cout << pArray << endl; // ���ڸ��� 4
	pArray += 2; //int�� �� 8����Ʈ�� ����  ���� ����Ʈ�� *2�� ��������
	cout << pArray << endl;
}