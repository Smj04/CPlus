#include<iostream>
#include<fstream>
using namespace std;
//peek�� ���� �����Ͱ� �̵�X �׳� ���⸸ �ϴ°�
//get�� �ϸ� �����ѲƸ� �а� �����´�
int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "������ ���µ� �����߽��ϴ�." << endl;
		return 1;
	}
	input.seekg(-1, ios::end);
	cout << (char)input.peek();
	input.seekg(0, ios::beg);
	cout << (char)input.peek();
	input.seekg(7, ios::cur);
	cout << (char)input.peek();
	input.seekg(5);			//�ϳ��� ���� ó������ ����
	cout << (char)input.peek() << endl;

	input.close();
	return 0;
}