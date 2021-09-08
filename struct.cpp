#include <iostream>
using namespace std;
struct MyStruct
{
	int sum(int, int);
};
int main() {
	MyStruct ms;
	ms.sum(3,4);
}
int MyStruct::sum(int a, int b) {
	
	return a+b;
}