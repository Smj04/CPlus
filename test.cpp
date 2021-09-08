#include <iostream>
using namespace std;
int main(void) {
	char* sce = nullptr;
	char dest[] = "same"; //여기서 a는 sce+1
	sce = dest;
	*sce = 'g';
	cout << *sce+2; //*sce+2 문자와 숫자를 더하면 아스키코드가 출력됨. 그래서 괄호써야함.

}