#include <iostream>
using namespace std;
class MyPerson {
public:
	MyPerson() {
		cout << "MyPerson()" << endl;
	}
	MyPerson(const MyPerson& rhs) { //복사 생성자
		//:nAge(rhs.nAge);
		this->nAge = rhs.nAge;
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
int main() {
	MyPerson p1;
	p1.setData(20);

	MyPerson p2(p1);
	cout << "Person의 나이 : " << p2.getData() << endl;
	return 0;
}