#include <iostream>
using namespace std;

class MyData {
public :
	MyData(int nParam) {
		m_pnData = new int;
		*m_pnData = nParam;
	}
	MyData(const MyData& rhs) {
		cout << "CMDyata(const MyData &)" << endl;
		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;

	}
	/*int GetData() {
		if (m_pnData != NULL)
			return *m_pnData;

		return 0;
	}*/
public:  //private
	int* m_pnData = nullptr;
	
};
	int main() {
		MyData a(10);
		MyData b(a);
		cout << *a.m_pnData << endl;	//a�� nPnData�� �������̹Ƿ� *()   �켱������ .�� ���� ������ ()���� ��
		cout << *(b.m_pnData) << endl;
		
		//������ü 
		MyData* c = new MyData(20);
		MyData* d = new MyData(*c);  //�����̹Ƿ� * �ٿ�����

		cout << *(c->m_pnData)<<endl;
		cout << *(d->m_pnData) << endl;
		return 0;
	}