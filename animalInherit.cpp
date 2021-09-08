#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;

public:
	Animal() {
		cout << "Animal ������()" << endl;
	}
	Animal(string name, int weight) {
		this->name = name;
		this->weight = weight;
		cout << "�Ű����� Animal ������()" << endl;
	}
	~Animal() {
		cout << "Animal �Ҹ���()" << endl;
	}
	/*string getName() {
		return name;
	}
	int getWeight() {
		return weight;
	}*/
	void print() {
		cout << name << " " << weight << " " << endl;
	}
};
class Dog: public Animal{
	int height;
public:
	Dog() {
		cout << "Dog ������()" << endl;

	}
	Dog(string name, int weight, int height):Animal(name, weight) {		//�ƺ��� �Ű����� 2��¥�� ������ ȣ��
		//���࿡ Animal()�� ������ �ƺ� �⺻�����ڸ� ȣ��
		//�Ƶ鿡���� height�� ��� �Ƶ鿡�� ���� ���ϰ� ������ get()���� �����Ѵ�
		cout << "�Ű����� Dog ������()" << endl;
		this->height = height;		//���� ������� �ڰ� �Ű�����
	}
	~Dog() {cout << "Dog �Ҹ���()" << endl;}
	void print() {
		Animal::print();
		cout << height << endl;
	}

};
int main() {
	Animal a("����", 1000);
	a.print();

	Dog dog;
	Dog d1("������", 3, 50);
	d1.print();
	return 0;
}