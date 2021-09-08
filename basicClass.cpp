#include <iostream>
using namespace std;
class P {
public : 
	
	char * name;
	int age;

	P(int age, const char *name) {
		this->age = age;
		this->name = new char[20];
		strcpy(this->name, name);

		cout << age << endl;
		cout << name << endl;
	}
};
int main() {
	P p1(120, "ȫ�浿");
}