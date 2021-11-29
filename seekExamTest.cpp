#include <iostream>
#include <fstream>
//source.txt를 target.txt에 복사하는 프로그램
using namespace std;
int main() {
	ifstream src("seekExamTest.cpp", ios::in);	// 입력모드	source.txt		모드를 ifstream::binary로 해야 잘 안깨진다
	ofstream tar("target.txt", ios::out);	//출력모드

	char szBuffer[1024];
	int nRead;
	
	for (;;) {
		src.read(szBuffer, 1024);	//입력파일에서 읽어서
		nRead = src.gcount();		//읽어들인 바이트 수
		tar.write(szBuffer, nRead);	//1024로 하면 쓰레기 값이 나오기때문에 count한 변수까지 찍어줘야함!
		if (nRead == 0)	break;			//**꼭 vreak하기! 무한루프돌면 결과가 안나옴**
	}

}