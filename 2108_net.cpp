#include<iostream>
using namespace std;
int main() {
	int gross=0; 
	int su=0;
	int net=0;

	cin >> gross;
	cout << "연수입 입력(만원 단위로 입력) : ";
	
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
		tax += 21; //20+3000의 초과분의3%
	}
	else if (su >= 5000){
		tax +=5800;
		tax /= 600;
		tax -= 60; //80+5000의 초과분의6%
		tax += 163;
	}
	cout << "세금 : " << tax << "만원"<<endl;
	cout << "실질소득 : " << su - tax<<"만원";
}