#include<iostream>
using namespace std;
// ��ҹ��� ������� A��1B�� 2
int main() {
	char alp;
	cout << "���ĺ� �� ���� �Է� : ";
	cin >> alp;
	

	if (alp >= 'a' && alp <= 'z')
	{
		alp = alp - 32; //�ҹ���
	}
	else "ERROR";
		cout << (int)alp - 'A' + 1 << endl;
		//�빮��
	
	return 0;
}