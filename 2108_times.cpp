#include <iostream>
using namespace std;
int main(){
	
	int num1, num2;
	int i = 0;
	
	

	cin >> num1;
	cin >> num2;


if(num1<num2){

	for (; num1 <= num2; num1++) { 
		
		for (i = 1; i < 10; i++) {
			
			cout << num1 << " * " << i << " = " << num1 * i << endl;
			if (i == 9)
				cout << endl;
		}
		
	}
}

else { //¹İ´ë
	for(; num1>=num2; num2++){
		for (int i = 1; i < 10; i++) {
			cout << num2 << " * " << i << " = " << num2 * i << endl;
			if (i == 9)
				cout << endl;
		}
	}
}

return 0;
}