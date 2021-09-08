#include <iostream>
using namespace std;
//call by value때문에 다 복사가 됨
//그래서 기억할 수 있는 포인터로 바꿈
class Account {
public:
	char accID[20]; //계좌 번호
	char secID[20]; //비밀번호
	char name[20]; //이름
	int balance; //잔액
	void Deposit(int money);
	void Withdraw(int money);
 //이것을 밖으로 빼낼려면 프로토타입을 구조체안에 넣음 ::
	void print();

};

int main() {
	Account mirim = { "1234", "1357", "개나리", 1000 }; //위에 멤버변수 순으로
	mirim.Deposit(100);
	mirim.print();
	//입금 1100
	mirim.Withdraw(300); //출금 800
	mirim.print();

}
void Account::Deposit(int money) { //구조체 타입 메개변수
	balance += money; //call by reference
	
}
void Account::Withdraw(int money) {
	balance -= money;
	
}
void Account::print() {
	cout << "계좌번호 : " << accID << endl; //출력문 메소드
	cout << "비밀번호 : " << secID << endl;
	cout << "이름 : " << name << endl;
	cout << "잔액 : " << balance << endl;
}