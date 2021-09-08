#include <iostream>
//this->는 멤버 메소드나 멤버 변수에만 쓰기 가능
using namespace std;
	class Person {
	//public: //이걸 안쓰면 자동으로 private 오류 ->이니셜값 너무 많습니다 라고 뜸
		const char* name;
		const char* phone;
		int age;
	public:
		void ShowData();
		//void SetData(const char* _name, const char* _phone, int _age);
		
		Person(const char* _name, const char* _phone, int _age); 
	};
	void Person::ShowData() { //이게 만약 void가 아니면 아래 get도 만들어야함
		cout << "name: " << name << endl;
		cout << "phone: " << phone << endl;
		cout << "age: " << age << endl;
	}
	Person::Person(const char* _name, const char* _phone, int _age) { //생성자 (클래스이름과 같아야함) 리턴 타입X
		name = _name;																															
		phone = _phone;
		age = _age;
		cout << "객체가 소멸합니다." << endl;                                                                                                                                                    
	}
	/*void Person::SetData(const char* _name, const char* _phone, int _age) { 
		name = _name;
		phone = _phone;
		age = _age;
	}*/
	int main() {
		Person  p("KIM", "013-113-1113", 22); //또는 Person p = Person();
		
		p.ShowData();
		return 0;
}                                                                                    