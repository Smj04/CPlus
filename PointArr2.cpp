#include<iostream>
using namespace std;

class Point {

public:
	int x;
	int y;

	Point() {
		cout << "�⺻ ������" << endl;
	}
	~Point() {
		cout << x << ", " << y << "�⺻ �Ҹ���" << endl; //�����̸� �Ųٷ� ���� delete �Ƚ��ѵ� �˾Ƽ� ����
		//�����̸� ����, ���� : ���� ���̰� ���� �� ���̱� ����(ex. ���� ĳ���� �ױ�)
	}
};
int main() {
	Point *arr[5];
	//arr[0] = new Point(); �⺻
	for (int i = 0; i < 5; i++) {
		arr[i] = new Point(); //i��ŭ �����Ҵ� delete�� 5�� 
		cin >> arr[i]->x;
		cin >> arr[i]->y; //������ ��ü�迭�̶� .��� -> x��ġ�� �����͸޸� �Ҵ��� ������Ѵ�
	}
	for (int i = 0; i < 5; i++) {
		delete arr[i]; //������ �����Ҵ��� delete�� ���, �迭 0������� ������� ����.
	}
}