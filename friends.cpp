#include <iostream>
using namespace std;

class Counter {
private: int val;

public:Counter() {
	val = 0;
	cout << "생성자" << endl;
}
	  void Print() { cout << val << endl; }


	  friend void SetX(Counter& c, int val) {		//friend를 붙이면 private가 public으로 사용가능하다.
		  c.val = val;

	  }
	  
}; int main() {
	Counter cnt; cnt.Print();

	SetX(cnt, 2002);
	cnt.Print();

	return 0;
}