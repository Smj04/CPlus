#include <iostream>
using namespace std;
int main(void) {
	char* sce = nullptr;
	char dest[] = "same"; //���⼭ a�� sce+1
	sce = dest;
	*sce = 'g';
	cout << *sce+2; //*sce+2 ���ڿ� ���ڸ� ���ϸ� �ƽ�Ű�ڵ尡 ��µ�. �׷��� ��ȣ�����.

}