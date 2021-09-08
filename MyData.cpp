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
		cout << *a.m_pnData << endl;	//a의 nPnData의 기억공간이므로 *()   우선순위가 .이 높기 때문에 ()빼도 됨
		cout << *(b.m_pnData) << endl;
		
		//동적객체 
		MyData* c = new MyData(20);
		MyData* d = new MyData(*c);  //동적이므로 * 붙여야함

		cout << *(c->m_pnData)<<endl;
		cout << *(d->m_pnData) << endl;
		return 0;
	}