#include <iostream>
using namespace std;
int simple(int, int, double);
int compound(int, int, double);
int main(void) {
	int money;
	int year;

	cout << "원금(원) : ";
	cin >> money;
	const double yee =  0.012;
	cout << "예치기간(년) : ";
	cin >> year;
	cout << "이율 : 1.2%" << endl;
	cout << "예치기간\t만기시 총수령액(단리)\t만기시 총수령액(복리)" << endl;
	for (int i = 1; i <= year; i++) {
		cout << i << "년\t\t" << simple(money, i, yee) << "\t\t" << compound(money, i, yee) << "\t\t\t" << endl;
	}

}
int simple(int money, int year, double yee) { //단리
	int dan = money * (1 + yee * year);
	return dan;
}
int compound(int money, int year, double yee) { //복리
	int bok = money * pow((1 + yee), year);
	return bok;
}
