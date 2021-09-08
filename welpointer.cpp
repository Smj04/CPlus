#include<iostream>
using namespace std;
int main() {
	//void* pValue = 0; //void*라 int인지 몰라서 에러 그래서 강제 형변환*(int* ) 시킴
	//int val = 100;
	//pValue = &val;
	//*(int* )pValue = 200;
	//cout << *(int* )pValue;

	char pMessage[] = "welcome to korea"; //주소에 주소 들가면x
	char* pP = pMessage; //배열로 선언하면 에러나서 포인터 하나 선언
	//주소에 주소 들가면x &ㄴㄴ

	
	for (int i = 0; i < sizeof(pMessage); i++) {
		cout << *pP << endl; //공백과 끝에 null있음
		pP++;
	}
	//int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int* pArray;
	//pArray = nArray;
	//nArray = pArray; //배열명은 주소를 바꿀 수 없어서 대입x 에러
	return 0;
}