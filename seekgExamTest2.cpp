#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;
int main() {
	int ncount = 10;	
	int nNumber;
	char szName[20];

	ofstream outfile("out2.txt"); //��¿�
	
	for(int i = 0; i < ncount; i++){
		nNumber = i + 1;
		sprintf(szName, "�̸�_%d" ,nNumber);	//format�� ���羲�°� nNumber�� %d�� ���� ��ü�� szName���� ��
		outfile << nNumber << szName << endl;	
	}
	outfile.close();		//openopen�� �ȵ� �ݵ�� close()�ϰ� �� ��������!



	ofstream infile("out2.txt");		//�Է¿�
	for (int i = 0; i < ncount; i++) {
		
		infile<<nNumber<<endl;
		infile<<szName<<endl;
		
		
	}
	infile.close();
	
}