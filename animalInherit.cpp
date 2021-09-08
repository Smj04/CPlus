#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;

public:
	Animal() {
		cout << "Animal 생성자()" << endl;
	}
	Animal(string name, int weight) {
		this->name = name;
		this->weight = weight;
		cout << "매개변수 Animal 생성자()" << endl;
	}
	~Animal() {
		cout << "Animal 소멸자()" << endl;
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
		cout << "Dog 생성자()" << endl;

	}
	Dog(string name, int weight, int height):Animal(name, weight) {		//아빠쪽 매개변수 2개짜리 생성자 호출
		//만약에 Animal()이 없으면 아빠 기본생성자를 호출
		//아들에서는 height만 출력 아들에서 굳이 다하고 싶으면 get()으로 리턴한다
		cout << "매개변수 Dog 생성자()" << endl;
		this->height = height;		//앞이 멤버변수 뒤가 매개변수
	}
	~Dog() {cout << "Dog 소멸자()" << endl;}
	void print() {
		Animal::print();
		cout << height << endl;
	}

};
int main() {
	Animal a("동물", 1000);
	a.print();

	Dog dog;
	Dog d1("강아지", 3, 50);
	d1.print();
	return 0;
}