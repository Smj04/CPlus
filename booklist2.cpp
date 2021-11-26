#include <iostream>
#include<vector>
#include <string>
//iterator사용 방법!!
using namespace std;
const int num = 5;

struct Book {
	string title;
	int grade;
};
bool filllist(Book& b) {

	cout << "책 제목 입력 : ";
	cin >> b.title;
	

	if (b.title == "quit") return false;
	cout << "책 등급 입력 : ";
	cin >> b.grade;

	return true;
}

void ShowList(Book &b) {
	cout << "책 제목 : " << b.title << endl;
	cout << "책 등급 : " << b.grade << endl;
}

int main() {
	vector<Book> booklist;
	Book temp;
	while (filllist(temp)) {
		booklist.push_back(temp);
	}

	//int num = booklist.size();
	cout << "\n\n========================================================\n\n";

	//for (int i = 0; i < num; i++) {						아래와 동일
	//cout << "책 제목 : "<<  booklist[i].title<<endl;
	//cout << "책 등급 : " << booklist[i].grade << endl;
	//}


	/*for(auto& e: booklist)
	{
		cout << "책 제목 : "<<  e.title<<endl;
		cout <<"책 등급 : "<< e.grade<<endl;
	}*/
	
	vector<Book>::iterator ptr;   //끝만 변수명 앞에는 바뀌면 X

	for (ptr = booklist.begin(); ptr != booklist.end(); ptr++) {						//시작 부분부터
		ShowList(*ptr);

	/*cout << "책 제목 : "<<  booklist[i].title<<endl;
	cout << "책 등급 : " << booklist[i].grade << endl;*/
	}

	//백업
	vector<Book> oldList(booklist);

	cout << "==old==" << endl;

	for (auto& e : oldList) {
		cout << "책 제목 : " << e.title << endl;
		cout << "책 등급 : " << e.grade << endl;
	}

	//삭제 end -1해야함
	if(num>5){
		booklist.erase(booklist.begin()+1, booklist.end()); //하나 남기고 다 삭제 끝만 남음
	}
	cout << "==booklist==" << endl;
	for (auto& e : booklist) {
		cout << "책 제목 : " << e.title << endl;
		cout << "책 등급 : " << e.grade << endl;
	}

	//삽입
	cout << "==booklist insert==" << endl;
	booklist.insert(booklist.begin(), oldList.begin() + 1, oldList.begin() + 2);

	for (auto& e : booklist) {
		cout << "책 제목 : " << e.title << endl;
		cout << "책 등급 : " << e.grade << endl;
	}

	//교환
	cout << "==list swap==" << endl;
	booklist.swap(oldList);
	cout << "==booklist==" << endl;
	for (auto& e : booklist)  ShowList(e);
	cout << "==oldList==" << endl;
	for (auto& e : booklist)  ShowList(e);


	return 0;

}