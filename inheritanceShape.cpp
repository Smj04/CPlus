//int x, y,height, width
#include <iostream>
using namespace std;

class Shape {		//�θ�
protected:
	int x, y, height, width;
public:
	Shape():x(0), y(0), width(0), height(0) {
		cout << "����������" << endl;
	} //0���� �ʱ�ȭ
		
	
	Shape(int x, int y, int width, int height):x(x),y(y),width(width), height(height) {
		cout << "�Ű����� ����������" << endl;
	} //this
	
	virtual ~Shape() { cout << "�����Ҹ���" << endl<<endl; }	//��Ӻθ�� ���� virtual�� ����(�������̵���)
																//�θ� �ڽ� ��� �Ҹ���
	//virtual�Ⱦ��� ����
	
	virtual void Draw() {
		cout << "���� �׸��ϴ�." << endl;
		cout << "x ��ǥ : " << x << ", ";
		cout << "y��ǥ : " << y << ", ";
		cout << "width ��ǥ : " << width << ", ";
		cout << "height ��ǥ : " << height << ", ";
	}
	
};

class Rect : public Shape{
	int k;
public:
	Rect() : Shape() {
		k = 0;
		cout << "�簢��������" << endl;
	}
	Rect(int x, int y, int width, int height) : Shape(x,y,width, height) {
		cout << "�Ű����� �簢��������" << endl;
	}
	~Rect() { cout << "�簢���Ҹ���" << endl; }

	void Draw() {
		cout << "�簢���� �׸��ϴ�." << endl;
		cout << "x ��ǥ : "<< x << ", ";
		cout << "y��ǥ : "<< y << ", ";
		cout << "width ��ǥ : " << width << ", ";
		cout << "height ��ǥ : " << height << ", ";
		cout << "k : " << k<<endl;
	}
	
};

	class Ellipse : public Shape{
	public:
			Ellipse() : Shape() {
				cout << "Ÿ����������" << endl;
			}
			Ellipse(int x, int y, int width, int height) : Shape(x, y, width, height) {
				cout << "�Ű����� Ÿ����������" << endl;
			}
			~Ellipse() {
				cout << "Ÿ�����Ҹ���" << endl;
			}
			void Draw() {
				cout << "Ÿ���� �׸��ϴ�." << endl;
				cout << "x ��ǥ : " << x << ", ";
				cout << "y��ǥ : " << y << ", ";
				cout << "width ��ǥ : " << width << ", ";
				cout << "height ��ǥ : " << height<<", ";
			}
			
		};

	class Triangle : public Shape {
	public:
		Triangle() : Shape() {
			cout << "�ﰢ�� ������" << endl;
		}
		Triangle(int x, int y, int width, int height) : Shape(x, y, width, height) {
			cout << "�Ű����� �ﰢ��������" << endl;
		}
		~Triangle() {
			cout << "�ﰢ���Ҹ���" << endl;
		}
			void Draw() {
				cout << "�ﰢ���� �׸��ϴ�." << endl;
				cout << "x ��ǥ : " << x << ", "<<endl;
				cout << "y��ǥ : " << y << ", " <<endl;
				cout << "width ��ǥ : " << ", " << endl;
				cout << "height ��ǥ : " << height << ", "<< endl;
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
	//			//0 0 0 0  �θ𲬷� ����ȯ
	//	delete rect;

	//	Shape* shape =  new Shape();
	//		//Shape
	//	shape->Draw();			//0 0 0 0		��ȣ �ֹ�������Ѵ� �켱������ Draw()�� �����Ǽ�
	//	delete shape;				//Shape �Ҹ�


	//	/*Ellipse* rs1 = new Shape();
	//	rs1->Draw();
	//	delete rs1;*/

	//	Shape* rs2 = new Rect();
	//	rs2->Draw();
	//	delete rs2;
	//}
	/*int main() {*/
	//	Rect r1();		//�Ű������� ���� ���� ��ü�� �ݵ�� ()�� ����Ѵ�!
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



//int main() {				����
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