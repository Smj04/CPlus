#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand((unsigned)time(0));
	for (int i = 0; i < 100; i++) {
		//�ڹٿ����� *��� c++�� ������ ���
		cout << i + 1 << ":" << rand()%50+12 << endl; //5~10
		//12~50
		//�� ���ڸ� 0���� �ٲٸ� 38 ù��° ���ڸ� ���Ѵ�
		//���� 38+12


	}
	
	return 0;
}
