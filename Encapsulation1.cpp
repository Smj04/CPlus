#include <iostream>
using namespace std;

class CONTAC600 {
public:
	void SnotTake(int id) {
		cout << id << " �๰ ����" << endl;
	}
	void SneezeTake(int id) {
		cout << id << " ��ä�� �ܱ�" << endl;
	}
	void SnuffleTake(int id) {
		cout << id << " �� �ձ�" << endl;
	}
	void take(int id) {
		SnotTake(id);
		SneezeTake(id);
		SnuffleTake(id);
	}
};
class Patient {
public:
	int id;
public:
	void take(CONTAC600 cap){
	cap.take(id);
}
};
//
//class SnotCap {
//public:
//	void take(int id) {
//		cout << id << " �๰ ����" << endl;
//	}
//};
//class SneezeCap {
//public:
//	void take(int id) {
//		cout << id << " ��ä�� �ܱ�" << endl;
//	}
//};
//class SnuffleCap {
//public:
//	void take(int id) {
//		cout << id << " �� �ձ�" << endl;
//	}
//};
//class Patient {
//public:
//	int id;
//public:
//	void takeSinivelCap(SnotCap cap) {
//		cap.take(id);
//	}
//	void takeSinivelCap(SneezeCap cap) {
//		cap.take(id);
//	}
//	void takeSinivelCap(SnuffleCap cap) {
//		cap.take(id);
//	}
//};

int main() {
	Patient suf = { 1001 };
	suf.take(CONTAC600 (CONTAC600));
	//Patient suf = { 1001 }; //id
	//SnotCap a;
	//SneezeCap b;
	//SnuffleCap c;
	//suf.takeSinivelCap(SnotCap(a));
	//suf.takeSinivelCap(SneezeCap(b));
	//suf.takeSinivelCap(SnuffleCap(c));

	return 0;
}