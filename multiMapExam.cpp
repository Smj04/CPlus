#include<iostream>
#include <map>
using namespace std;

int main() {
	multimap<string, int> m;
	m.insert(pair<string, int>("a", 6));
	multimap<string, int>::iterator ii;
	for (ii = m.begin(); ii != m.end(); ii++)
	{
		cout << ((*ii).first)<< " "<< ((*ii).second) <<  endl;	//key value �� ���
		cout << m.count("a")<<endl;	//value�� ���� ��� 
	}
	pair<multimap<string, int>::iterator, multimap<string, int>::iterator>ppp;

	ppp = m.equal_range("b");
	for (ii = m.begin(); ii != m.end(); ii++)
	{
		cout << ((*ii).first) << " " << ((*ii).second) << endl;	//key value �� ���
		cout << m.count("a") << endl;	//value�� ���� ��� 
	}
}