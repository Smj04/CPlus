#include <iostream>
#include<vector>
#include <string>
using namespace std;
const int num = 5;
struct Book{
	string title;
	int grade;
};
void filllist(Book &b) {
		

		cout << "å ���� �Է� : ";
		cin >> b.title;

		cout << "å ��� �Է� : ";
		cin >> b.grade;
		
	}



int main() {
	vector<Book> booklist(num);
	for (int i = 0; i < num; i++) {
		filllist(booklist[i]);
	}
	for (int i = 0; i < num; i++) {
		cout << booklist[i].title;
		cout << booklist[i].grade;
	}
	
	return 0;

}