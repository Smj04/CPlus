#include <iostream>
using namespace std;
//call by value������ �� ���簡 ��
//�׷��� ����� �� �ִ� �����ͷ� �ٲ�
class Account {
public:
	char accID[20]; //���� ��ȣ
	char secID[20]; //��й�ȣ
	char name[20]; //�̸�
	int balance; //�ܾ�
	void Deposit(int money);
	void Withdraw(int money);
 //�̰��� ������ �������� ������Ÿ���� ����ü�ȿ� ���� ::
	void print();

};

int main() {
	Account mirim = { "1234", "1357", "������", 1000 }; //���� ������� ������
	mirim.Deposit(100);
	mirim.print();
	//�Ա� 1100
	mirim.Withdraw(300); //��� 800
	mirim.print();

}
void Account::Deposit(int money) { //����ü Ÿ�� �ް�����
	balance += money; //call by reference
	
}
void Account::Withdraw(int money) {
	balance -= money;
	
}
void Account::print() {
	cout << "���¹�ȣ : " << accID << endl; //��¹� �޼ҵ�
	cout << "��й�ȣ : " << secID << endl;
	cout << "�̸� : " << name << endl;
	cout << "�ܾ� : " << balance << endl;
}