#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream output("output.txt");
	output << "aaaaaaaaaa";
	output.seekp(3);		//0���� �����ؼ� Ŀ���� ��
	output << "bbb";	//�ű⼭ bbb�� ���
	cout << "���� ��ġ�� " << output.tellp() << "�Դϴ�." << endl;
	output.seekp(-5, ios::end);			//������ 5��°??
	output << "ccc";
	cout << "���� ��ġ�� " << output.tellp() << "�Դϴ�." << endl;
	output.close();
	return 0;
	
}