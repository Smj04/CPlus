#include <iostream>
using namespace std;
int simple(int, int, double);
int compound(int, int, double);
int main(void) {
	int money;
	int year;

	cout << "����(��) : ";
	cin >> money;
	const double yee =  0.012;
	cout << "��ġ�Ⱓ(��) : ";
	cin >> year;
	cout << "���� : 1.2%" << endl;
	cout << "��ġ�Ⱓ\t����� �Ѽ��ɾ�(�ܸ�)\t����� �Ѽ��ɾ�(����)" << endl;
	for (int i = 1; i <= year; i++) {
		cout << i << "��\t\t" << simple(money, i, yee) << "\t\t" << compound(money, i, yee) << "\t\t\t" << endl;
	}

}
int simple(int money, int year, double yee) { //�ܸ�
	int dan = money * (1 + yee * year);
	return dan;
}
int compound(int money, int year, double yee) { //����
	int bok = money * pow((1 + yee), year);
	return bok;
}
