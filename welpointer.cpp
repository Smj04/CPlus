#include<iostream>
using namespace std;
int main() {
	//void* pValue = 0; //void*�� int���� ���� ���� �׷��� ���� ����ȯ*(int* ) ��Ŵ
	//int val = 100;
	//pValue = &val;
	//*(int* )pValue = 200;
	//cout << *(int* )pValue;

	char pMessage[] = "welcome to korea"; //�ּҿ� �ּ� �鰡��x
	char* pP = pMessage; //�迭�� �����ϸ� �������� ������ �ϳ� ����
	//�ּҿ� �ּ� �鰡��x &����

	
	for (int i = 0; i < sizeof(pMessage); i++) {
		cout << *pP << endl; //����� ���� null����
		pP++;
	}
	//int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int* pArray;
	//pArray = nArray;
	//nArray = pArray; //�迭���� �ּҸ� �ٲ� �� ��� ����x ����
	return 0;
}