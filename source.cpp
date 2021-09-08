#include <iostream>
using namespace std;

namespace definition {
	int jungui = 10;
}

namespace justice {
	int jungui = 20;
}

int main() {
	cout << definition::jungui << endl;
	cout << justice::jungui << endl;
	return 0;
}