#include<iostream>
using namespace std;

struct Point {
	int x;
	int y;

	void Print() {
		cout << "x ��ǥ : " << x << endl;
		cout << "y ��ǥ : " << y << endl;
	}// �޼���
};
int main() {
	Point p = { 1,2 }; //��ü(?)�� ����ü ���� ����
	//����ü �̸� �̸� = {�� ��};
	//�� �߰�ȣ �ȿ��� ����ü ��� ���� ������ ��
	p.Print();
	//�����ͷ� �θ��� �ʹٸ�
	
	Point* Ppoint = &p; //Ppoint ������ p�ּҰ� ����
	(*Ppoint).Print();
}