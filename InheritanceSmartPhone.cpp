#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;
class Camera {
public:
	Camera() {
		cout << "Camera ������" << endl;
	}
	void Shutter() {
		cout << "������ ���" << endl;        
	}
	~Camera() {
		cout << "Camera �Ҹ���" << endl;
	}
};
class Phone {
	char number[12];
public:

	Phone() {
		cout << "Phone ������" << endl;
	}
	Phone(const char* number) {
		strcpy(this->number, number);
		cout << "Phone ������ ��ȭ��ȣ : " <<  number <<  endl;
		
	}
	void Call(){
		cout << "��ȭ�� �ɴ�" << endl;
	}
	void ShowInfo() {
		cout << "��ȭ��ȣ : " << number << endl;
	}
	void setNumber(const char* number) {

		strcpy(this->number, number);
	}
	~Phone() {
		cout << "Phone �Ҹ���" << endl;
	}
};
class SmartPhone : public Camera, public Phone {
public:
	SmartPhone() :Phone(){
		cout << "SmartPhone ������" << endl;
	}
	SmartPhone(const char* number) : Phone(number){ //�迭�� �Ű������� ������
		
		cout << "SmartPhone������ ��ȭ��ȣ : " << number << endl;
		/*Phone::Call();
		Phone::ShowInfo();
		Camera::Shutter();*/
	}

	~SmartPhone() {
		cout << "SmartPhone �Ҹ���" << endl;
	}
};

class MobilePhone : public Phone{
public:
	Camera cam;
	MobilePhone()  {
		cout << "MobilePhone ������" << endl;
	}
	MobilePhone(const char* number) : Phone(number) { //�迭�� �Ű������� ������

		cout << "MobilePhone������ ��ȭ��ȣ : " << number << endl;
		
	}
	void ClickShutter() {
		cam.Shutter();
	}

	~MobilePhone() {
		cout << "MobilePhone �Ҹ���" << endl;
	}
};

class MobileDevice {
public:
	Camera cam;
	Phone ph;
	MobileDevice() {
		cout << "MobilePhone ������" << endl;
	}

	MobileDevice(const char* number) { //�迭�� �Ű������� ������
		ph.setNumber(number);
		cout << "MobilePhone������ ��ȭ��ȣ : " << number << endl;
		
	}
	void ClickShutter() {
		cam.Shutter();
	}
	
	~MobileDevice() {
		cout << "MobilePhone �Ҹ���" << endl;
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