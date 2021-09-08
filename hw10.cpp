#include<iostream>
using namespace std;
int main() {
	int cnt = 0;
	int sum = 0;
	

	for (int i = 1; i < 55; i++) {
		sum += i;
		if (i % 5 == 0) {
			cout << "1 ~ " << i << " --> " << sum << endl;
		}
	}

	return 0;
}