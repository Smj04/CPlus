#include <iostream>
using namespace std;
#define INNON 3
#define SUBJ 4
string subj_name[] = { "����","����","����","�ڹ�","C" };
class Student {
private:
	char hakbun[5];
	int rank;
	char name[10];
	char grade;
	int subj[SUBJ + 1];
	double avg;
	
	
public:
	Student() {
		subj[SUBJ] = 0;
		rank = 1; //�����Ҷ����� ��ũ�� �ö�
		cout << "����" << endl;

	}
	~Student() {
		cout << "�Ҹ�" << endl;
	}
	void input(int);
	void calc();
	void print();
	int getTot() {
		return subj[SUBJ];
	}
	int getRank() {
		return rank;
	}
	void addRank() {
		rank++;
	}
};
void Student::input(int i) {
	cout << i + 1 << "��° �л� �Է� : " << endl;
	cout << "�й� �Է� : ";
	cin >> hakbun;

	cout << "�̸� �Է� : ";
	cin >> name;
	for (int i = 0; i < SUBJ; i++) {
		cout << subj_name[i] << " ���� �Է� : ";
		cin >> subj[i];
		while (!(subj[i] >= 0 && subj[i] <= 100)) {
			cout << subj_name[i]<<"���� �ٽ� �Է� : ";
			cin >> subj[i];
		}
	}
	cout << endl;
}
	
void Student::calc() {
	for (int i = 0; i < SUBJ; i++)
		subj[SUBJ] += subj[i];
	avg = (double)subj[SUBJ] / SUBJ;

	switch ((int)avg/10) { //90 80 70 ���ڸ� ������� 10���� ����
		//9.9�� 9�� ������ int�� ��ȯ
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}
}
void Student::print() {
	cout << hakbun << "\t" << name << "\t";
	for (int i = 0; i <= SUBJ; i++) cout << subj[i] << "\t";
	cout << "\t" << avg << "\t" << grade << "\t"<<rank<< endl;

}
	void ranking(Student *stud) {
		for (int i = 0; i < INNON -1; i++)
			for (int j = i + 1; j < INNON; j++)
				if (stud[i].getTot() < stud[j].getTot()) stud[i].addRank();
				else if(stud[i].getTot() > stud[j].getTot()) stud[j].addRank();
	}//������ ������ ������ �ø���X

	int main() {
		/*int INNON;
		cin >> INNON;*/
		//Student stu[INNON]; //����
		//����
		//Student* stu = new Student[INNON]; ������ ȣ�� 0
		Student* stu[INNON]; //������ ȣ��X  new���ؾ���

		//for () {
		//	stu[i] = new Student; //������ ȣ���� �Ͼ
		//}
		cout << sizeof(stu) << endl;
		cout << sizeof(*stu[0]) << endl;
		/*for (int i = 0; i < INNON; i++) {

			stu[i].input(i);
			stu[i].calc();
		}
		ranking(stu);
		for (int i = 0; i < INNON; i++) stu[i].print();
	}*/
		return 0;
	}
