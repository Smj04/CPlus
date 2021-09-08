#include<iostream>
#include<string>
#include<ctime>
#include<cmath>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point() {

        x = 0;
        y = 0;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    void Set(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

class Line {
private:
    char* name = nullptr;
    int x1, x2;
    int y1, y2;
public:
    Line() {
        static int num;
        x1 = 0;
        x2 = 0;
        y1 = 0;
        y2 = 0;
        num++;
        cout << endl << num << "��° �� ����";
    }
    void Set(Point& p1, Point& p2, const char* name) {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);

        x1 = p1.getX();
        x2 = p2.getX();
        y1 = p1.getY();
        y2 = p2.getY();
    }
    ~Line() {
        delete this->name;
    }
    double Line_length() {
        return sqrt((pow(x1, 2) + pow(y1, 2)) + (pow(x2, 2) + pow(y2, 2)));
    }
    void LinePrint() {
        cout << "�� (" << x1 << ", " << y1 << ")�� ��(" << x2 << ", " << x2 << ")�� �մ� " << name << "�� ���� : " << Line_length() << endl;;
    }
};

class Circle {
private:
    int x;
    int y;
    int r;
    const double Pi = 3.141592;
public:
    Circle() {
        static int num;
        x = 0;
        y = 0;
        r = 0;
        num++;
        cout << num << "��° �� ����" << endl;
    }
    ~Circle() {
    }
    void Set(Point& p1, int r) {
        x = p1.getX();
        y = p1.getY();
        this->r = r;

    }
    double  width() {
        return pow(r, 2) * Pi;
    }
    void CirclePrint() {
        cout << "���� ��ǥ(" << x << ", " << y << ") ������ " << r << "�� ���� ���� : " << width() << endl;
    }
};

int main(void) {
    srand((unsigned int)time(NULL));
    while (1) {
        cout << "============" << endl;
        cout << "== SELECT ==" << endl;
        cout << "============" << endl;
        cout << "1. ���� ���� ���ϱ�" << endl;
        cout << "2. �� �׸���" << endl;
        cout << "0. ����" << endl;
        cout << "�޴� ���� == > ";
        int choiceMenu = 0;
        cin >> choiceMenu;
        if (choiceMenu == 0) {
            return 0;
        }
        else if (choiceMenu == 1) {
            cout << endl << endl << "���� ������ �Է��ϼ���. ";
            int circleNumber;
            cin >> circleNumber;
            Circle* circle = new Circle[circleNumber];
            Point* p = new Point[circleNumber];
            for (int i = 0; i < circleNumber; i++) {
                p[i].Set(rand() % 101, rand() % 101);
            }
            for (int i = 0; i < circleNumber; i++) {
                circle[i].Set(p[i], rand() % 10 + 1);
                circle[i].CirclePrint();
            }
            for (int i = circleNumber - 1; i >= 0; i--) {
                cout << i + 1 << "��° �� �Ҹ�" << endl;
            }
            delete[] p;
            delete[] circle;
            cout << endl << endl << endl;
        }
        else if (choiceMenu == 2) {
            cout << endl << endl << "���� ������ �Է��ϼ���. ";
            int lineNumber;
            cin >> lineNumber;
            Line* line = new Line[lineNumber];
            int linePointer = lineNumber * 2;
            Point* p = new Point[linePointer];
            cout << endl;
            for (int i = 0; i < linePointer; i++) {
                p[i].Set(rand() % 61 - 30, rand() % 61 - 30);
            }
            for (int i = 0, j = 0; i < lineNumber; i++) {
                char name[12];
                cout << "���� �̸��� �Է��ϼ���. : ";
                cin >> name;
                j++;
                line[i].Set(p[j - 1], p[j], name);
            }
            for (int i = 0; i < lineNumber; i++) {
                line[i].LinePrint();
            }
            for (int i = lineNumber - 1; i >= 0; i--) {
                cout << i + 1 << "��° �� �Ҹ�" << endl;
            }
            delete[] p;
            delete[] line;
            cout << endl << endl << endl;
        }
        else {
            cout << endl << "�޴��� �ٽ� �����ϼ���." << endl << endl << endl;
        }
    }
    return 0;
}