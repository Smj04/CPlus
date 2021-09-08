#include<iostream>
using namespace std;
int sum(int a=10, int b=1, int c= 2, int d=3) { //b자리는 채워졌으니 출력문은 a값만 넣으면됨
	//디폴트 매개변수 (default)
	//이때 a의 값은 디폴트x
	return a + b;
}
int sum() {
	return 0;
}
int main() {
	cout << sum(2) << endl;
	cout << sum(4,5) << endl; //여기서 b값 바꿔도 됨
	//cout << sum() << endl; 이거 에러남 위sum과 아래sum 둘중 갈데를 몰라서
}