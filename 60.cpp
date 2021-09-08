#include <iostream>
using namespace std;
int main(void) {
	int* ptr;
	int arr[4] = { 1, };
	ptr = arr;

	for (int i = 0; i < 4; i++)
		cout << &arr[i] << " ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << ptr+i << " ";

	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << arr[i]; //나머지는 초기값 안 주면 0으로 출력
}
