#include <iostream>
using namespace std;

struct st { //����ü�� �� ;�� �����ؾ���
	//���� ������ �����Ѵٸ� ;�� �ѹ��� �ᵵ ��
	int x;
	int y;
};
int main() {
	st point = { 2,4 };
	st* Pst = &point;
	cout << Pst->x << ", " << (*Pst).y << endl;
	//Ps->x�� (*Pst).y�� ������� ����
}