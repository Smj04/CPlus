#include <iostream>
using namespace std;
int main() {

	int n;
	cout <<"�� ���� ���� : ";
	cin >> n;
	
	int* arr = new int[n]; //�����Ҵ�

	for (int i = n; i < sizeof(arr)/sizeof(int); i++)
		arr[i]=i;

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}