#include<iostream>
using namespace std;
int main() {

    int maxIndex = 0, maxValue = 0;
    int n, mul = 0;
    cout << "���� �Է� : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        mul = 1;
        for (int j = 1; j <= i; j++) {
            mul *= j;
        }
        cout << "1~" << i << "������ �� : " << mul << endl;
        if (mul > n) break;
        maxIndex = i;
        maxValue = mul;
    }
    cout << "--------------------------" << endl;
    cout << "1~ " << maxIndex << "������ �� : " << maxValue << endl;
    cout << "-----------------------------" << endl;
    return 0;

}