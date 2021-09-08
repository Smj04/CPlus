#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "¼ö ÀÔ·Â : ";
	cin >> n;
	int a;
	while (n!=0) {
		a = n % 10;
		cout << a;
		n = n / 10;
	}
	
}