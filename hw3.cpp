#include <iostream>

using namespace std;

int main() {
	 //�ձ��ϴ� ����


	for (int i = 1; i <= 1000; i++) {
		int a = 0;							//i�� �� ���ƾ� �ϹǷ� i�� for�� �Ʒ��� ���� a = i�� ����� �� ����
		for (int j = 1;  j < i; j++) {		//i�� ��� �ڱ��ڽ� ��
			if (i % j == 0)					//����� ���ϴ� ����
				a += j;

		}
		if (i == a) {
			cout << a << endl;
		}

	}	return 0;
}