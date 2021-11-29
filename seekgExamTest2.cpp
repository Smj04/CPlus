#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;
int main() {
	int ncount = 10;	
	int nNumber;
	char szName[20];

	ofstream outfile("out2.txt"); //출력용
	
	for(int i = 0; i < ncount; i++){
		nNumber = i + 1;
		sprintf(szName, "이름_%d" ,nNumber);	//format에 맞춰쓰는것 nNumber가 %d로 들어가서 전체가 szName으로 들어감
		outfile << nNumber << szName << endl;	
	}
	outfile.close();		//openopen은 안됨 반드시 close()하고 또 열수있음!



	ofstream infile("out2.txt");		//입력용
	for (int i = 0; i < ncount; i++) {
		
		infile<<nNumber<<endl;
		infile<<szName<<endl;
		
		
	}
	infile.close();
	
}