#include <iostream>
#include<vector>
#include <string>
//iterator��� ���!!
using namespace std;
const int num = 5;

struct Book {
	string title;
	int grade;
};
bool filllist(Book& b) {

	cout << "å ���� �Է� : ";
	cin >> b.title;
	

	if (b.title == "quit") return false;
	cout << "å ��� �Է� : ";
	cin >> b.grade;

	return true;
}

void ShowList(Book &b) {
	cout << "å ���� : " << b.title << endl;
	cout << "å ��� : " << b.grade << endl;
}

int main() {
	vector<Book> booklist;
	Book temp;
	while (filllist(temp)) {
		booklist.push_back(temp);
	}

	//int num = booklist.size();
	cout << "\n\n========================================================\n\n";

	//for (int i = 0; i < num; i++) {						�Ʒ��� ����
	//cout << "å ���� : "<<  booklist[i].title<<endl;
	//cout << "å ��� : " << booklist[i].grade << endl;
	//}


	/*for(auto& e: booklist)
	{
		cout << "å ���� : "<<  e.title<<endl;
		cout <<"å ��� : "<< e.grade<<endl;
	}*/
	
	vector<Book>::iterator ptr;   //���� ������ �տ��� �ٲ�� X

	for (ptr = booklist.begin(); ptr != booklist.end(); ptr++) {						//���� �κк���
		ShowList(*ptr);

	/*cout << "å ���� : "<<  booklist[i].title<<endl;
	cout << "å ��� : " << booklist[i].grade << endl;*/
	}

	//���
	vector<Book> oldList(booklist);

	cout << "==old==" << endl;

	for (auto& e : oldList) {
		cout << "å ���� : " << e.title << endl;
		cout << "å ��� : " << e.grade << endl;
	}

	//���� end -1�ؾ���
	if(num>5){
		booklist.erase(booklist.begin()+1, booklist.end()); //�ϳ� ����� �� ���� ���� ����
	}
	cout << "==booklist==" << endl;
	for (auto& e : booklist) {
		cout << "å ���� : " << e.title << endl;
		cout << "å ��� : " << e.grade << endl;
	}

	//����
	cout << "==booklist insert==" << endl;
	booklist.insert(booklist.begin(), oldList.begin() + 1, oldList.begin() + 2);

	for (auto& e : booklist) {
		cout << "å ���� : " << e.title << endl;
		cout << "å ��� : " << e.grade << endl;
	}

	//��ȯ
	cout << "==list swap==" << endl;
	booklist.swap(oldList);
	cout << "==booklist==" << endl;
	for (auto& e : booklist)  ShowList(e);
	cout << "==oldList==" << endl;
	for (auto& e : booklist)  ShowList(e);


	return 0;

}