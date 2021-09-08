//int x, y,height, width
#include <iostream>
using namespace std;

class Shape {		//부모
protected:
	int x, y, height, width;
public:
	Shape():x(0), y(0), width(0), height(0) {
		cout << "도형생성자" << endl;
	} //0으로 초기화
		
	
	Shape(int x, int y, int width, int height):x(x),y(y),width(width), height(height) {
		cout << "매개변수 도형생성자" << endl;
	} //this
	
	virtual ~Shape() { cout << "도형소멸자" << endl<<endl; }	//상속부모는 백퍼 virtual이 붙음(오버라이딩도)
																//부모 자식 모두 소멸함
	//virtual안쓰면 누수
	
	virtual void Draw() {
		cout << "도형 그립니다." << endl;
		cout << "x 좌표 : " << x << ", ";
		cout << "y좌표 : " << y << ", ";
		cout << "width 좌표 : " << width << ", ";
		cout << "height 좌표 : " << height << ", ";
	}
	
};

class Rect : public Shape{
	int k;
public:
	Rect() : Shape() {
		k = 0;
		cout << "사각형생성자" << endl;
	}
	Rect(int x, int y, int width, int height) : Shape(x,y,width, height) {
		cout << "매개변수 사각형생성자" << endl;
	}
	~Rect() { cout << "사각형소멸자" << endl; }

	void Draw() {
		cout << "사각형을 그립니다." << endl;
		cout << "x 좌표 : "<< x << ", ";
		cout << "y좌표 : "<< y << ", ";
		cout << "width 좌표 : " << width << ", ";
		cout << "height 좌표 : " << height << ", ";
		cout << "k : " << k<<endl;
	}
	
};

	class Ellipse : public Shape{
	public:
			Ellipse() : Shape() {
				cout << "타원형생성자" << endl;
			}
			Ellipse(int x, int y, int width, int height) : Shape(x, y, width, height) {
				cout << "매개변수 타원형생성자" << endl;
			}
			~Ellipse() {
				cout << "타원형소멸자" << endl;
			}
			void Draw() {
				cout << "타원을 그립니다." << endl;
				cout << "x 좌표 : " << x << ", ";
				cout << "y좌표 : " << y << ", ";
				cout << "width 좌표 : " << width << ", ";
				cout << "height 좌표 : " << height<<", ";
			}
			
		};

	class Triangle : public Shape {
	public:
		Triangle() : Shape() {
			cout << "삼각형 생성자" << endl;
		}
		Triangle(int x, int y, int width, int height) : Shape(x, y, width, height) {
			cout << "매개변수 삼각형생성자" << endl;
		}
		~Triangle() {
			cout << "삼각형소멸자" << endl;
		}
			void Draw() {
				cout << "삼각형을 그립니다." << endl;
				cout << "x 좌표 : " << x << ", "<<endl;
				cout << "y좌표 : " << y << ", " <<endl;
				cout << "width 좌표 : " << ", " << endl;
				cout << "height 좌표 : " << height << ", "<< endl;
			}
			
		};

	int main() {
		Shape* rs2[6];
		rs2[0] = new Rect();
		rs2[1] = new Rect(1,2,3,4);
		rs2[2] = new Ellipse();
		rs2[3] = new Rect(4,3,2,1);
		rs2[4] = new Rect();
		rs2[5] = new Rect(5,6,7,8);

		for(int i =0; i<6; i++){
		rs2[i]->Draw();
		}

		for(int i =0; i<6; i++){
		delete rs2[i];
		}

		//rs2[0]->Draw();
		//rs2[1]->Draw();
		//rs2[2]->Draw();
		//rs2[3]->Draw();
		//rs2[4]->Draw();
		//rs2[5]->Draw();
		//delete rs2[0];
		//delete rs2[1];
		//delete rs2[2];
		//delete rs2[3];
		//delete rs2[4];
		//delete rs2[5];


	}
	//int main() {
	//	Rect* rect = new Rect();
	//	
	//	rect->Draw();
	//			//0 0 0 0  부모껄로 형변환
	//	delete rect;

	//	Shape* shape =  new Shape();
	//		//Shape
	//	shape->Draw();			//0 0 0 0		괄호 주번해줘야한다 우선순위로 Draw()가 먼저되서
	//	delete shape;				//Shape 소멸


	//	/*Ellipse* rs1 = new Shape();
	//	rs1->Draw();
	//	delete rs1;*/

	//	Shape* rs2 = new Rect();
	//	rs2->Draw();
	//	delete rs2;
	//}
	/*int main() {*/
	//	Rect r1();		//매개변수가 없는 동적 객체는 반드시 ()를 써야한다!
	//	r1.Draw();
	//	


	//	Rect r2(1, 2, 3, 4);
	//	r2.Draw();
	//	

	//	Ellipse e1 = Ellipse();
	//	e1.Draw();
	//	

	//	Ellipse* e2 = new Ellipse(5, 6, 7, 4);
	//	e2->Draw();
	//	

	//	Triangle* t1 = new Triangle;
	//	t1->Draw();
	//	delete t1;

	//	Triangle* t2 = new Triangle(50, 30, 70, 90);
	//	t2->Draw();
	//	delete t2;
	//}



//int main() {				동적
//	Rect* r1 = new Rect;
//	r1->Draw();
//	delete r1;
//
//	Rect* r2 = new Rect(1,2,3,4);
//	r2->Draw();
//	delete r2;
//
//	Ellipse* e1 = new Ellipse;
//	e1->Draw();
//	delete e1;
//
//	Ellipse* e2 = new Ellipse(5, 6, 7, 4);
//	e2->Draw();
//	delete e2;
//
//	Triangle* t1 = new Triangle;
//	t1->Draw();
//	delete t1;
//
//	Triangle* t2 = new Triangle(50,30,70,90);
//	t2->Draw();
//	delete t2;
//}