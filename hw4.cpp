#include<iostream>
//'z'를 입력 받으면 1~15까지 출력
using namespace std;
int main() {
	char z;

	int i = 1;
	

	while (true)
	{	
		cout << "입력 : ";
		cin >> z;
			if(z=='z'){
				for(i=1; i<=15; i++)
			cout << i << endl;
				i++; break;
				}
			} 
	
		}
	

