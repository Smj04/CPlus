#include <iostream>
using namespace std;
class Person {
protected: string name; int age;	//protected�� ���� ������� ������׸� ���� ���� 
public :
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;
	}
	Person() { cout << "�ƺ�" << endl; }
};			//�����ڸ� ���ָ� �ƺ� �⺻������ ã��
class Student : public Person {
private: int id;
public: Student(int id, const string& name, int age)  { //:Person(name, age)
	this->id = id;

}
	  void ShowPerson() {
		  cout << name << "�� ���̴� " << age << " ���̵�� "<<id<<"�Դϴ�. " << endl;
	  }
};
int main() {
	Student st(1234, "ȫ�浿", 33);
	st.ShowPerson();
	return 0;
}