#include <iostream>
//this->�� ��� �޼ҵ峪 ��� �������� ���� ����
using namespace std;
	class Person {
	//public: //�̰� �Ⱦ��� �ڵ����� private ���� ->�̴ϼȰ� �ʹ� �����ϴ� ��� ��
		const char* name;
		const char* phone;
		int age;
	public:
		void ShowData();
		//void SetData(const char* _name, const char* _phone, int _age);
		
		Person(const char* _name, const char* _phone, int _age); 
	};
	void Person::ShowData() { //�̰� ���� void�� �ƴϸ� �Ʒ� get�� ��������
		cout << "name: " << name << endl;
		cout << "phone: " << phone << endl;
		cout << "age: " << age << endl;
	}
	Person::Person(const char* _name, const char* _phone, int _age) { //������ (Ŭ�����̸��� ���ƾ���) ���� Ÿ��X
		name = _name;																															
		phone = _phone;
		age = _age;
		cout << "��ü�� �Ҹ��մϴ�." << endl;                                                                                                                                                    
	}
	/*void Person::SetData(const char* _name, const char* _phone, int _age) { 
		name = _name;
		phone = _phone;
		age = _age;
	}*/
	int main() {
		Person  p("KIM", "013-113-1113", 22); //�Ǵ� Person p = Person();
		
		p.ShowData();
		return 0;
}                                                                                    