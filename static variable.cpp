#include <iostream>
using namespace std;
int main() {
	void subFuncA(); {
		int nVal = 10;
		cout << "subFuncA::nVal=" << nVal << endl;
		nVal++;
	}
	void subFuncB(); {
		static int nVal = 10;
		cout << "subFuncB::static nVal=" << nVal << endl;
		nVal++;
	}
}
