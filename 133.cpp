#include<iostream>
#include<memory>
using namespace std;
int main() {
	unique_ptr<int> ptr(new int);
	*ptr = 100;
	cout << *ptr << " ";
	cout << endl;
	unique_ptr<int[]> pArray(new int[10]);
	for (int i = 0; i < 10; i++)
		pArray[i] =i;
	for (int i = 0; i < 10; i++)
		cout << pArray[i] << " ";
	cout << endl;
}