#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> lotto(int range, int sel) {//����, ����� ��������
	srand((unsigned int)time(NULL));
	vector<int> v;
	for (int i = 0; i < range; i++) {
		
		v.push_back(rand() % range + 1);
		/*for (int k = 0; k < i; k++) {
			if (v[j] == v[k]) {
				v.pop_back();
				j--;
			}
		}*/
		random_shuffle(v.begin(), v.end());
		v.resize(sel);			//���� �� 6�� ������
	}
	return v;

}


int main() {

	//for (int i = 0; i < 100; i++) {
	vector<int> v2;
	v2 = lotto(46, 6);

	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}
	cout << endl;
	//}
}

