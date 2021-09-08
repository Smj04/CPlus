#include <iostream>

using namespace std;

int main() {
	 //합구하는 변수


	for (int i = 1; i <= 1000; i++) {
		int a = 0;							//i가 다 돌아야 하므로 i의 for문 아래다 선언 a = i의 약수의 합 변수
		for (int j = 1;  j < i; j++) {		//i의 약수 자기자신 뺌
			if (i % j == 0)					//약수를 구하는 공식
				a += j;

		}
		if (i == a) {
			cout << a << endl;
		}

	}	return 0;
}