#include <iostream>
#include <fstream>
//source.txt�� target.txt�� �����ϴ� ���α׷�
using namespace std;
int main() {
	ifstream src("seekExamTest.cpp", ios::in);	// �Է¸��	source.txt		��带 ifstream::binary�� �ؾ� �� �ȱ�����
	ofstream tar("target.txt", ios::out);	//��¸��

	char szBuffer[1024];
	int nRead;
	
	for (;;) {
		src.read(szBuffer, 1024);	//�Է����Ͽ��� �о
		nRead = src.gcount();		//�о���� ����Ʈ ��
		tar.write(szBuffer, nRead);	//1024�� �ϸ� ������ ���� �����⶧���� count�� �������� ��������!
		if (nRead == 0)	break;			//**�� vreak�ϱ�! ���ѷ������� ����� �ȳ���**
	}

}