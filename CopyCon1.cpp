#include <iostream>
using namespace std;


class AAA {
public: AAA() { cout << "AAA() 호출" << endl; }
	  AAA(int i) {
		  cout << "AAA(int i) 호출" << endl;
				}
		  AAA(const AAA& a) {
			  cout << "AAA(const AAA& a)호출" << endl;	//생성자를 복사 
		  }
		  void ShowData() {
			  cout << "&&&&&&&&&&&&&&&" << endl;
		  }
	 
};
void function(AAA a) {
	a.ShowData();
} 
int main() {
	AAA obj1;
	AAA obj2(10);
	function (obj1);
	AAA obj3(obj2);	//수를  X 매개변수가 &라 변수명이 올 수 있음.
	
}