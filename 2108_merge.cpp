#include <iostream>
using namespace std;

void merge(int[], int);


int main() {
    int A[5];
    int B[5];
    int C[10];

    cout << "첫번째 병합 데이타 5개 입력 : ";
    for (int i = 0; i < 5; i++)
        cin >> A[i];

    cout << "두번째 병합 데이타 5개 입력 : ";
    for (int i = 0; i < 5; i++)
        cin >> B[i];

    cout << "**************" << endl;

    cout << "첫번째 데이타 정렬 결과 : ";
    merge(A, 5);
    for (int i = 0; i < 5; i++)
        cout << A[i] << "\t";

    cout << endl;
    cout << "두번째 데이타 정렬 결과 : ";
    merge(B, 5);
    for (int i = 0; i < 5; i++)
        cout << B[i] << "\t";

    for (int i = 0; i < 10; i++) {
        if (i < 5) C[i] = A[i];
        else C[i] = B[i - 5];
    }

    cout << endl << "최종 데이타 병합 결과 : ";
    merge(C, 10);
    for (int i = 0; i < 10; i++) {
        if (C[i - 1] == C[i]) continue;
        cout << C[i] << "\t";
    }
}
void merge(int num[], int n) {
    int i, j, temp = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < (n - 1 - i); j++) {
            if (num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}