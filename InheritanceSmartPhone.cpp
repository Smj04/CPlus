#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;
class Camera {
public:
	Camera() {
		cout << "Camera 생성자" << endl;
	}
	void Shutter() {
		cout << "사진을 찍다" << endl;        
	}
	~Camera() {
		cout << "Camera 소멸자" << endl;
	}
};
class Phone {
	char number[12];
public:

	Phone() {
		cout << "Phone 생성자" << endl;
	}
	Phone(const char* number) {
		strcpy(this->number, number);
		cout << "Phone 생성자 전화번호 : " <<  number <<  endl;
		
	}
	void Call(){
		cout << "전화를 걸다" << endl;
	}
	void ShowInfo() {
		cout << "전화번호 : " << number << endl;
	}
	void setNumber(const char* number) {

		strcpy(this->number, number);
	}
	~Phone() {
		cout << "Phone 소멸자" << endl;
	}
};
class SmartPhone : public Camera, public Phone {
public:
	SmartPhone() :Phone(){
		cout << "SmartPhone 생성자" << endl;
	}
	SmartPhone(const char* number) : Phone(number){ //배열을 매개변수면 포인터
		
		cout << "SmartPhone생성자 전화번호 : " << number << endl;
		/*Phone::Call();
		Phone::ShowInfo();
		Camera::Shutter();*/
	}

	~SmartPhone() {
		cout << "SmartPhone 소멸자" << endl;
	}
};

class MobilePhone : public Phone{
public:
	Camera cam;
	MobilePhone()  {
		cout << "MobilePhone 생성자" << endl;
	}
	MobilePhone(const char* number) : Phone(number) { //배열을 매개변수면 포인터

		cout << "MobilePhone생성자 전화번호 : " << number << endl;
		
	}
	void ClickShutter() {
		cam.Shutter();
	}

	~MobilePhone() {
		cout << "MobilePhone 소멸자" << endl;
	}
};

class MobileDevice {
public:
	Camera cam;
	Phone ph;
	MobileDevice() {
		cout << "MobilePhone 생성자" << endl;
	}

	MobileDevice(const char* number) { //배열을 매개변수면 포인터
		ph.setNumber(number);
		cout << "MobilePhone생성자 전화번호 : " << number << endl;
		
	}
	void ClickShutter() {
		cam.Shutter();
	}
	
	~MobileDevice() {
		cout << "MobilePhone 소멸자" << endl;
	}

};

int main() {
	SmartPhone sp("01012345678");
	sp.Call();
	/*sp.ShowInfo();*/
	sp.Shutter();


	MobilePhone mp("01012345678");
	mp.Call();
	mp.ShowInfo();
	mp.ClickShutter();

	MobileDevice md("01012345678");
	
	md.ClickShutter();
	
}