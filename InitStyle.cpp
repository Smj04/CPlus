#include <iostream>
using namespace std;


class AAA {
	int val;
public:
	AAA(int n) { 
		cout << "생성" << endl;		//생성자를 두번 왔다갔다 함.
		val = n;  
	}
	void showData() {
		cout << val << endl;
	}
};


int main() {
	AAA a1(10);
	a1.showData();
	AAA a2 = 20;		//복사 생성자 copy라 원본은 변화X, const로 많이 함.
	a2.showData();

	return 0;
	
	
}