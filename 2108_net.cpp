#include<iostream>
using namespace std;
int main() {
	int gross=0; 
	int su=0;
	int net=0;

	cin >> gross;
	cout << "������ �Է�(���� ������ �Է�) : ";
	
		cin >> su; 
		int tax = su;
		
	if (su < 1000){
		tax = 0;
	}
	else if (su >= 1000 && su < 3000) {
		tax /= 100;
		tax -= 10; //1%
	}
	else if (su >= 3000 && su < 5000){
		tax += 3020;
		tax /= 300;
		tax -= 30; 
		tax += 21; //20+3000�� �ʰ�����3%
	}
	else if (su >= 5000){
		tax +=5800;
		tax /= 600;
		tax -= 60; //80+5000�� �ʰ�����6%
		tax += 163;
	}
	cout << "���� : " << tax << "����"<<endl;
	cout << "�����ҵ� : " << su - tax<<"����";
}