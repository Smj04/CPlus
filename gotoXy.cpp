#include<iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
	COORD m;
	m.X = x;
	m.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), m);
}



void main() {
	gotoxy(100, 0);
	cout << "테스트 글씨입니다~";

	
}

