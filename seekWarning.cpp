#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream input("input.txt");	//���� input�� input.txt�� �о�°��� ����
	if (input.fail()) {
		cout << "������ ���� �� �����߽��ϴ�." << endl;
		return 1;
	}
	input.seekg(0, ios::end);
	cout << (char)input.get() << endl;
	input.clear();
	input.seekg(-5, ios::cur);		//����Ŀ���� ���� -5 ������� v�� �������� �׷��� ������ ��?
	
	//�� ������ c++�� ��Ʈ���� eofbit��� �÷��׸� ������ �ִµ� ����� �Լ��� ���� ������ ���� �����ϸ� ������ ���� �����ߴٶ�� ������ �÷��װ� ������ �Ǹ� �� ���� ������Լ��� ������x
	//->�̰��� �������ִ°��� clear��
		cout << (char)input.get() << endl;
	input.close();
	return 0;
}