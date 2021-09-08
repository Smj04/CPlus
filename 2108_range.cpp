#include<iostream>
using namespace std;
int main() {

    int maxIndex = 0, maxValue = 0;
    int n, mul = 0;
    cout << "범위 입력 : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        mul = 1;
        for (int j = 1; j <= i; j++) {
            mul *= j;
        }
        cout << "1~" << i << "까지의 곱 : " << mul << endl;
        if (mul > n) break;
        maxIndex = i;
        maxValue = mul;
    }
    cout << "--------------------------" << endl;
    cout << "1~ " << maxIndex << "까지의 곱 : " << maxValue << endl;
    cout << "-----------------------------" << endl;
    return 0;

}