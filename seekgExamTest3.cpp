#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;
int main() {
	int ncount = 10;
	int nNumber;
	char szName[20];

	fstream outfile("out2.txt"); //����¿�

	for (int i = 0; i < ncount; i++) {
		nNumber = i + 1;
		sprintf(szName, "�̸�_%d", nNumber);	
		outfile << nNumber << szName << endl;
	}
	//outfile.close();		//openopen�� �ȵ� �ݵ�� close()�ϰ� �� ��������!

	//iostream infile("out2.txt");		
	for (int i = 0; i < ncount; i++) {
		outfile.seekg(0, ios::beg);
		outfile >> szName;
		outfile >> nNumber;

		cout  << outfile.get() << endl;
	}
	
	outfile.close();

}