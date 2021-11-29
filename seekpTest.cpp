#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream output("output.txt");
	output << "aaaaaaaaaa";
	output.seekp(3);		//0부터 시작해서 커서를 둠
	output << "bbb";	//거기서 bbb로 덮어씀
	cout << "현재 위치는 " << output.tellp() << "입니다." << endl;
	output.seekp(-5, ios::end);			//끝에서 5번째??
	output << "ccc";
	cout << "현재 위치는 " << output.tellp() << "입니다." << endl;
	output.close();
	return 0;
	
}