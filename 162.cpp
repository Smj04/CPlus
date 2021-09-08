#include <iostream>
#include<string>
using namespace std;
class Person {
	string name;
	protected:
		string addr;

};
class Student : Person {
public:
	void setNaemr(string name) {
		this->name = name;
	}
	void setAddr(string addr) {
		this->addr = addr;
	}
	string getAddr() {
		return addr;
	}
};