#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand((unsigned)time(0));
	int n = 0;
	int i = 1;
	int ra = rand() % 10 + 1;

	while(i<4){ //3����
	cout << "�� �Է� : ";
	cin >> n;
		if(n < ra){
			cout << "Up"<<endl;
			++i;
		}
		else if (n > ra) {
			cout << "Down" << endl;
			++i;
	}
		  else if (n == ra) {
			cout << "���� "; break;
		}	
	}
	if (i == 4) {
		cout << "������ " << ra << "����" << endl;
	} 
	return 0;
}