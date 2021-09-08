#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand((unsigned)time(0));
	for (int i = 0; i < 100; i++) {
		//자바에서는 *사용 c++은 나머지 사용
		cout << i + 1 << ":" << rand()%50+12 << endl; //5~10
		//12~50
		//앞 숫자를 0으로 바꾸면 38 첫번째 숫자를 더한다
		//따라서 38+12


	}
	
	return 0;
}
