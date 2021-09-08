#include<iostream>
using namespace std;
class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam) {
		cout << "MyPerson()" << endl;

	}
	MyPerson(const MyPerson& rhs) :nAge(rhs.nAge) {
		cout << "MyPerson(const MyPerson &)" << endl;
	}
	int getData(void) const {
		return nAge;
	}
	void setData(int nData) {
		nAge = nData;
	}
private:
	int nAge = 0;
};
void TestFunc(MyPerson param) {		//&로 고치면 call by vallue안되고 set값이 찍힘                              
	cout << "TestFunc()" << endl;
	param.setData(50);
}
int main() {
	cout << "***Begin***" << endl;
	MyPerson p1(30);
	TestFunc(p1);
	cout << "p1: " << p1.getData() << endl;
	cout << "***End***" << endl;


	return 0;
}