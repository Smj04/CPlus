#include<iostream>
//n값을 입력 받은 후 'c'를 한번 누르면 1~n까지 출력하는 프로그램
using namespace std;
int main() {
	char c;
	int n;
	int i;
	while (true)
	{

		cout << "n값 입력 : ";
		cin >> n;				

	cin >> c;
	if(c=='c'){
		for (i = 1; i <= n; i++)
								
			cout << i << endl;;
		i++; break;
	}
}

}

