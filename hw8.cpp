//unsigned integer A,B�� �Է� �޾� 0~B���� ���� �� A�� ����� ������ ������ �� �׵��� �� ������
//��:3,10�� �ԷµǸ� ���� ��� :3, �� �� : 10
//0���� 10������ 3�� ���:0,3,6,9
//���̶� ����
#include<iostream>
using namespace std;
int main() {
	int min = 0;
	int max = 0;
	int sum = 0;
	int cnt = 0;


	cout <<"�� 2�� �Է�(���� �� ū ��) : ";
	cin >> min >> max;
	cout << "���� ��� : " << min << endl;
	cout << "�� ��: " << max << endl;
	int i = 0;
	cout << "0����"<< max <<"������ "<< min << "�� ��� : ";
	for ( i = 0; i <= max; i++) {

		if (i % min == 0){
			cout << i;
		sum+=i;
		cnt++;
		}
	}
	
	cout << endl;

	cout << "0���� " << max << "������ " << min << "�� ����� ���� : " << cnt << "��" << endl;
	cout << "0���� " << max << "������ " << min << "�� ����� �� : " << sum;
	
		
		
		
	
}