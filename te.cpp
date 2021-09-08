#include <iostream>
using namespace std;
class CPerson {
private:
	string name;
	int age;
public:
	CPerson(){
		cout << "È«±æµ¿ »ý¼º" << endl;
	}

	CPerson(string name, int age){
		this->name = name;
		this->age = age;
		
	}
	void setName(int name) {
		this->name = name;
		
	}
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	void print() {
		cout << name << "Àº " << age << "¼¼ ÀÔ´Ï´Ù." << endl;
	}
	~CPerson() {
		cout << "È«±æµ¿ ¼Ò¸ê" << endl;
	}
};
int main() {

	CPerson();
	CPerson cp("È«±æµ¿", 33);
	cp.print();
	return 0;
}