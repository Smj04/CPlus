#include<iostream>
using namespace std;
int main() {
	unique_ptr <int[]> pArray(new int[10]);
	for (int i = 0; i < 10; i++)
		pArray[i]=i;
	
	for (int i = 0; i < 10; i++)
		cout << pArray[i] << " ";
	cout << endl;
	
	
	
	return 0;
}