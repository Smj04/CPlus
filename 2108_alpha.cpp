#include <iostream>
using namespace std;

int main() {
    char alpha[100];//���Ѵ�� ���
    while (true) {
        int sum = 0;
        cout << "���� �ܾ��� ���� ����ϴ� ���α׷��Դϴ�.('0'�� �Է��ϸ� ���α׷��� �����մϴ�.)" << endl;
        cout << "���ϴ� �ܾ �Է��ϼ���. ";
        cin >> alpha;

       if (alpha[0] == '0') break;
        else {
            for (int i = 0; i < alpha[i] != 0; i++) { //���� �� ��ŭ �ݺ�
                if (isupper(alpha[i]))  //���ĺ��� �빮�ڷ� ��ȯ
                    sum += (int)(alpha[i] - 'A' + 1);   
                else
                    sum += (int)(alpha[i] - 'a' + 1);
            }

        }
        cout << alpha << " ==> " << sum << endl;

        cout << endl;
    }
}