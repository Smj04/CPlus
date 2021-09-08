#include <iostream>
using namespace std;
class CBank {
private:
	string name;
	string account;
	int balance;
	static int cnt;
public:
	CBank() {
		this->name = "";
		this->account = "";
		this->balance = 0;
	}
	CBank(string name, string account, int balance) {	
		this->name = name;
		this->account = account;
		this->balance = balance;
		cout << "생성" << endl;
	}
	void refer() {
		cout << "예금주 : " << this->name << endl;
		cout << "계좌번호 : " << this->account << endl;
		cout << "잔액 : " << this->balance << endl;
	}
	~CBank() {
		cout << this->account<<"소멸" << endl;
	}
	void deposit() {
		int money;
		cout << "입금금액 : ";
		cin >> money;
		balance+= money;
	}
	void withdraw() {
		int money;
		cout << "출금금액 : ";
		cin >> money;
		balance -= money;
	}
void account_create() {
	
	string name = "";
	string account_no = "";
	int balance = 0;
	cout << "이름 : ";
	cin >> name;
	cout << "계좌번호 : ";
	cin >> account_no;
	cout << "입금금액 : ";
	cin >> balance;
	this->name = name;
	this->account = account_no;
	this->balance = balance;
	this->refer();
	cnt++;
	
}
static int getCnt() {
	return cnt;
}
string getAccount() {
	return account;
	}
string getName() {
	return name;
}
int getBalance() {
	return balance;
}
};
CBank* cb[10];
int CBank::cnt = 0;

int search() {
	string account_no = "";
	cout << "계좌번호 : ";
	cin >> account_no;
	for (int i = 0; i < CBank::getCnt(); i++) {
		if (account_no == cb[i]->getAccount()) {
			cout << account_no << " " << cb[i]->getAccount() << endl;
			return -1;
		}
	}
}
void All_Search() {
	for (int i = 0; i < CBank::getCnt(); i++) {
		cout << "############################" << endl;
		if(cb[i]!=nullptr)
		cout << cb[i]->getName() << " " << cb[i]->getAccount() << " " << cb[i]->getBalance() << endl;

	}
}
int main() {
	while (1) {
		cout << "1. 계좌 생성" << endl;
		cout << "2. 입금" << endl;
		cout << "3. 출금" << endl;
		cout << "4. 잔액조회" << endl;
		cout << "5. 계좌해지" << endl;
		cout << "6. 전체 계좌 조회" << endl;
		cout << "0. 종료" << endl;
		int menu;
		cout << "메뉴선택 ==> ";
		cin >> menu; 
		string account_no;
		//CBank* scb;
		int tmp_cnt = 0;
		int se_loc;
		switch (menu) {
		case 1:
			tmp_cnt = CBank::getCnt();
			cb[tmp_cnt] = new CBank();
			cb[tmp_cnt]->account_create(); break;

		case 2:
			se_loc = search();
			if (se_loc = -1) cb[se_loc]->deposit();
			else cout << "계좌번호 오류" << endl; break;
		case 3:

			se_loc = search();
			if (se_loc = -1) cb[se_loc]->withdraw();
			else cout << "계좌번호 오류" << endl; break;
			cb[se_loc]->withdraw(); break;

		case 4:
			se_loc = search();
			if (se_loc = -1) cb[se_loc]->refer(); 
			else cout << "계좌번호 오류" << endl; break;
			cb[se_loc]->refer(); break;

		case 5:
			se_loc = search();
			if (se_loc = -1) {
				cb[se_loc] = nullptr;
				delete cb[se_loc];
			}
			else cout << "계좌번호 오류" << endl; break;

		case 6:
			All_Search(); break;
		case 0: return 0;
		}
	}
}