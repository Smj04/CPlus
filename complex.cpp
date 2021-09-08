#include<iostream>
using namespace std;
//왼쪽 실수부(real), 오른쪽 허수부(imaginary)
class complex {
private:
	int real;
	int imaginary;

public:

	complex() {
		real = 0;
		imaginary = 0;
	}

	complex(int real, int imaginary) :real(real), imaginary(imaginary) {}

	complex& operator+(complex& c) {
		complex ctemp;
		ctemp.real = this->real + c.real;
		ctemp.imaginary = this->imaginary + c.imaginary;

		return ctemp;
	}
	complex& operator-(complex& c) {
		complex ctemp;
		ctemp.real = this->real - c.real;
		ctemp.imaginary = this->imaginary - c.imaginary;

		return ctemp;
	}

	complex& operator++() {	//전위
		this->real = ++real;

		return *(this);
	}


	complex& operator++(int) {		//후위는 무조건  int여야한다
		complex ctemp;

		ctemp.real = this->real++;
		ctemp.imaginary = this->imaginary;

		return ctemp;
	}

	complex& operator--() {	//전위
		this->real = --real;

		return *(this);
	}
	complex& operator--(int) {	//후위
		complex ctemp;
		ctemp.real = this->real--;
		ctemp.imaginary = this->imaginary;

		return ctemp;
	}

	complex& operator*(complex& c) {
		complex ctemp;
		ctemp.real = this->real * c.real - this->imaginary * c.imaginary;
		ctemp.imaginary = this->imaginary * c.real + this->real * c.imaginary;
		return ctemp;
	}


	void print() {
		if (real == 0 && imaginary == 0) {
			cout << "0" << endl;

		}
		else if (imaginary == 0) {
			cout << real << endl;
		}
		else if (real == 0) {
			cout << imaginary << "i" << endl;
		}
		else if (real == 1 && imaginary > 0)

			cout << real << "+i" << endl;




		else if (real > 0 && imaginary > 0)
			cout << real << "+" << imaginary << "i" << endl;

		else if (real < 0 && imaginary == 0) {
			cout << "i" << endl;
		}

		else if (real > 0 && imaginary == 0)
			cout << real << "+" << imaginary << "i" << endl;
		else if (real == 0 && imaginary < 0)
			cout << real << "+" << imaginary << "i" << endl;

		else if (imaginary > 0 && imaginary == 1) {
			cout << real << "+i" << endl;
		}
		else if (imaginary < 0 && imaginary == 1) {
			cout << real << "+i" << endl;
		}

		else if (real == 1 && imaginary < 0)
			cout << real << "-" << abs(imaginary) << "i" << endl;
		else if (real > 0 && imaginary < 0)
			cout << real << "-" << abs(imaginary) << "i" << endl;

		else if (abs(imaginary) == 1)
			cout << real << "-" << "i" << endl;

		else
			cout << real << "+" << imaginary << "i" << endl;
	}
};
int main() {
	complex c1(0, 0);
	complex c2(1, 1);
	complex c3(2, 2);
	complex c4(0, -2);
	complex c5(-5, 0);
	complex c6(3, 0);
	complex c7(0, 7);
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();
	c6.print();
	c7.print();
	cout << "--------------------" << endl;
	c1 = c2 + c3;
	c1.print();
	c2.print();
	c3.print();
	cout << "&&&&&&&&&&&&&&&&&&&&" << endl;
	c7 = c1 - c4;
	c1 = c7 - c2;
	c6 = c2 * c4;
	c1.print();
	c2.print();
	c4.print();
	c6.print();
	c7.print();
	cout << "$$$$$$$$$$$$$$$$$$$$$$" << endl;
	complex c8;
	complex c9;
	c9 = ++c4;
	complex c10;
	c4.print();
	c8.print();
	c9.print();
	cout << "%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	c10 = c4++;
	c4.print();
	c10.print();
	cout << "#######################" << endl;
	complex c11;

	c11 = c2--;
	complex c12;

	c12 = --c2;
	c2.print();
	c11.print();
	cout << "!!!!!!!!!!!!!!!!!!!!!!" << endl;

	c2.print();

	c12.print();
	return 0;
}