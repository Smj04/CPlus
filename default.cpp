#include<iostream>
using namespace std;
int sum(int a=10, int b=1, int c= 2, int d=3) { //b�ڸ��� ä�������� ��¹��� a���� �������
	//����Ʈ �Ű����� (default)
	//�̶� a�� ���� ����Ʈx
	return a + b;
}
int sum() {
	return 0;
}
int main() {
	cout << sum(2) << endl;
	cout << sum(4,5) << endl; //���⼭ b�� �ٲ㵵 ��
	//cout << sum() << endl; �̰� ������ ��sum�� �Ʒ�sum ���� ������ ����
}