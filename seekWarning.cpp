#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream input("input.txt");	//변수 input에 input.txt를 읽어온것을 저장
	if (input.fail()) {
		cout << "파일을 여는 데 실패했습니다." << endl;
		return 1;
	}
	input.seekg(0, ios::end);
	cout << (char)input.get() << endl;
	input.clear();
	input.seekg(-5, ios::cur);		//현재커서로 부터 -5 원래라면 v가 찍혀야함 그런데 안찍힘 왜?
	
	//그 이유는 c++의 스트림은 eofbit라는 플래그를 가지고 있는데 입출력 함수를 통해 파일의 끝에 도달하면 파일의 끝에 도달했다라는 뜻으로 플래그가 켜지게 되며 그 이후 입출력함수는 먹히지x
	//->이것을 해제해주는것이 clear다
		cout << (char)input.get() << endl;
	input.close();
	return 0;
}