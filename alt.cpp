#include<iostream>
using namespace std;
// ��ҹ��� ������� A��1 B�� 2
int main() {
	char alt;
	cout << "���ĺ� �� ���� �Է� : ";
	cin >> alt;


	if (alt >= 'a' && alt <= 'z')
	{
		alt = alt - 32; // �ҹ��� ����
	}
	cout << (int)alt - 'A' + 1 << endl; 


	return 0;
}