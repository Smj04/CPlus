#include<iostream>
#include<vector>
using namespace std;

vector<int> lotto(int range, int sel) {//¹üÀ§, Ãâ·ÂÇÒ °¼¤À¤µ½´
	srand((unsigned int)time(NULL));
	vector<int> v;
	for (int j = 0; j < sel; j++) {
		v.push_back(rand() % range + 1);
		for (int k = 0; k < j; k++) {
			if (v[j] == v[k]) {
				v.pop_back();
				j--;
			}
		}
	}
	return v;
}


int main() {
	
	//for (int i = 0; i < 100; i++) {
	vector<int> v2;
	v2 = lotto(100, 10);

		for (int i = 0; i < v2.size(); i++) {		
			cout << v2[i] << " ";
		}
		cout << endl;
	//}
}
	
	