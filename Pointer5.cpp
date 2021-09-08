#include <iostream>
using namespace std;
int main() {
	short nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	short* pArray = nullptr;
	cout << pArray << endl;
	pArray = nArray;
	cout << pArray << endl; // 끝자리는 4
	pArray += 2; //int일 때 8바이트씩 증가  따라서 바이트수 *2랑 마찬가지
	cout << pArray << endl;
}