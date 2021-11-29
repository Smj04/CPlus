#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;
int main() {
	int ncount = 10;
	int nNumber;
	char szName[20];

	fstream outfile("out2.txt"); //입출력용

	for (int i = 0; i < ncount; i++) {
		nNumber = i + 1;
		sprintf(szName, "이름_%d", nNumber);	
		outfile << nNumber << szName << endl;
	}
	//outfile.close();		//openopen은 안됨 반드시 close()하고 또 열수있음!

	//iostream infile("out2.txt");		
	for (int i = 0; i < ncount; i++) {
		outfile.seekg(0, ios::beg);
		outfile >> szName;
		outfile >> nNumber;

		cout  << outfile.get() << endl;
	}
	
	outfile.close();

}