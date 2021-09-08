#include <iostream>
using namespace std;
int main() {
	const char* pMessage = "welcome to korea";
	
	
	for (int i = 0; i < 16; i++) {
		cout << *(pMessage +i) << endl;
	}
//	cout << *(pMessage + 1) << endl; //e
//	cout << *(pMessage + 2) << endl;//l
//	cout << *(pMessage + 3) << endl;//c
}