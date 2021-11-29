#include<iostream>
#include<fstream>
using namespace std;
//peek을 쓰면 포인터가 이동X 그냥 보기만 하는것
//get을 하면 선택한꼿만 읽고 가져온다
int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "파일을 여는데 실패했습니다." << endl;
		return 1;
	}
	input.seekg(-1, ios::end);
	cout << (char)input.peek();
	input.seekg(0, ios::beg);
	cout << (char)input.peek();
	input.seekg(7, ios::cur);
	cout << (char)input.peek();
	input.seekg(5);			//하나만 쓰면 처음부터 본다
	cout << (char)input.peek() << endl;

	input.close();
	return 0;
}