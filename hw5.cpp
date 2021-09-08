#include <iostream>
using namespace std;
int main() {
	int cnt = 0;
	int n;
	cout << "10진수 입력 : ";
	cin >> n;
	int arr[8];
	
	

	for (int i = 0; i < 8; i++) {
		arr[i] = n % 2;
		n = n / 2; 
		cnt++;
		if (n == 0) {
			break;
		}
		
			
	}

	

	for (int i = cnt-1; i >= 0; i--) {
		cout << arr[i];
		}
		
	
	return 0;
}