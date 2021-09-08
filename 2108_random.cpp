#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(unsigned(time(0)));
	int random[10];
	int k;
	int k_sub;
	for (k = 0; k < 10; k++) {
		random[k] = rand() % 46 + 1;
		for (k_sub = 0; k_sub < k; k_sub++) {
			if (random[k] == random[k_sub]) {
				random[k--];
				break;
			}
		}
	}
	cout << "정렬 전 : ";
	for (k = 0; k < 10; k++) {
		cout << random[k] << " ";


	}
	cout << endl;
	
	int temp;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < k - 1; j++) {
			if (random[j] > random[j+1]) {
				temp = random[j];
				random[j] = random[j + 1];
				random[j + 1] = temp;
			}
		}
	}
	cout << "정렬 후 : ";
	for (int i = 0; i < 10; i++) {
		cout <<random[i] << " ";
	}

	return 0;
}