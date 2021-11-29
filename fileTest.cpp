#include<iostream>
#include<fstream>
using namespace std;

void reverseReadFile(ifstream& fin) {
	
	int length = fin.tellg();
	fin.seekg(0, ios::end);
	while (length>0)
	{
		
		cout << (char)fin.get();
	}
	
}
int main() {
	const char* file = "sample.txt";
	ifstream reverseReadFile(file);
	
	return 0;
}