#include <iostream>
using namespace std;


class AAA {
public: AAA() { cout << "AAA() ȣ��" << endl; }
	  AAA(int i) {
		  cout << "AAA(int i) ȣ��" << endl;
				}
		  AAA(const AAA& a) {
			  cout << "AAA(const AAA& a)ȣ��" << endl;	//�����ڸ� ���� 
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
	AAA obj3(obj2);	//����  X �Ű������� &�� �������� �� �� ����.
	
}