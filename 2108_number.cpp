#include <iostream>
using namespace std;
int main() {
	int i;
	int cnt = 0;
	for (i = 1; i < 151; i++) {
			if (i % 8 == 0) {
				cout << i<<" ";
			cnt++;
			if (i == 64)
				cout << endl;
			}
	}
			
			
	cout << endl;
	cout << "°³¼ö = " << cnt << "°³"<<endl;
		
	
}