#include <iostream>
using namespace std;


class AAA {
	int val;
public:
	AAA(int n) { 
		cout << "����" << endl;		//�����ڸ� �ι� �Դٰ��� ��.
		val = n;  
	}
	void showData() {
		cout << val << endl;
	}
};


int main() {
	AAA a1(10);
	a1.showData();
	AAA a2 = 20;		//���� ������ copy�� ������ ��ȭX, const�� ���� ��.
	a2.showData();

	return 0;
	
	
}