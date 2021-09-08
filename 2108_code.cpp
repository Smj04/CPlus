#include <iostream>
using namespace std;
void code(char, int);

int main() {
    cout << "char" << "\t" << "binary" << "\t\t" << "octal" << "\t" << "digit" << "\t" << "hexa" << endl;

    for (char i = 'A'; i <= 'Z'; i++) {
        cout << i << "\t";
        code(i, 2);
        cout << "\t";
        code(i, 8);
        cout << "\t";
        code(i, 10);
        cout << "\t";
        code(i, 16);
        cout << endl;
    }
}
void code(char ii, int n) {
    int arr[8], i = 0, in = (int)ii, j;

    if (n == 2 || n == 8 || n == 10) {
        while (in > 0) {
            arr[i] = in % n;
            in = in / n;
            i++;
        }

        for (j = i - 1; j >= 0; j--) {
            if (n == 2) {
                if (j == i - 1)
                    cout << "0";
            }
            cout << arr[j];
        }
    }
    if (n == 16) {
        char arr2[2];
        while (in > 0) {
            arr2[i] = in % n;

            if (arr2[i] < 10)
                arr2[i] = (48 + arr2[i]);

            else
                arr2[i] = (char)(55 + arr2[i]);
            in = in / n;
            i++;
        }
        for (int j = i - 1; j >= 0; j--)
            cout << arr2[j];
    }
}