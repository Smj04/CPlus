//unsigned integer A,B를 입력 받아 0~B까지 숫자 중 A의 배수의 개수와 각각값 및 그들의 합 계산출력
//예:3,10이 입력되면 구할 배수 :3, 끝 값 : 10
//0에서 10까지의 3의 배수:0,3,6,9
//합이랑 갯수
#include<iostream>
using namespace std;
int main() {
	int min = 0;
	int max = 0;
	int sum = 0;
	int cnt = 0;


	cout <<"수 2개 입력(작은 수 큰 수) : ";
	cin >> min >> max;
	cout << "구할 배수 : " << min << endl;
	cout << "끝 값: " << max << endl;
	int i = 0;
	cout << "0부터"<< max <<"까지의 "<< min << "의 배수 : ";
	for ( i = 0; i <= max; i++) {

		if (i % min == 0){
			cout << i;
		sum+=i;
		cnt++;
		}
	}
	
	cout << endl;

	cout << "0부터 " << max << "까지의 " << min << "의 배수의 갯수 : " << cnt << "개" << endl;
	cout << "0부터 " << max << "까지의 " << min << "의 배수의 합 : " << sum;
	
		
		
		
	
}