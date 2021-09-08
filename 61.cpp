#include <iostream>
using namespace std;
int main(void) {
	int*  ptr; //const를 붙이면 못 바꿈.
	int arr[4] = { 1,2,3,4 };
	ptr = arr;//const를 붙이면 못 바꿈.

	for (int i = 0; i < 4; i++)
		cout << arr[i] << " ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << *(ptr + i) << " "; //아래 arr[i]와 같음

	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << arr[i]; //나머지는 초기값 안 주면 0으로 출력 사실 *(arr+i)을 줄인 기호
	cout << endl;

	////추가
	for (int i = 0; i < 4; i++)
		cout << ptr[i];
	
	cout << endl;

	ptr++;
	cout << ptr << endl;

	cout << arr << endl;

	
	
}
