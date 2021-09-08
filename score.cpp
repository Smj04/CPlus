#include <iostream>
using namespace std;
#define INNON 3
#define SUBJ 4
string subj_name[] = { "국어","영어","수학","자바","C" };
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
		rank = 1; //생성할때마다 랭크가 올라감
		cout << "생성" << endl;

	}
	~Student() {
		cout << "소멸" << endl;
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
	cout << i + 1 << "번째 학생 입력 : " << endl;
	cout << "학번 입력 : ";
	cin >> hakbun;

	cout << "이름 입력 : ";
	cin >> name;
	for (int i = 0; i < SUBJ; i++) {
		cout << subj_name[i] << " 성적 입력 : ";
		cin >> subj[i];
		while (!(subj[i] >= 0 && subj[i] <= 100)) {
			cout << subj_name[i]<<"성적 다시 입력 : ";
			cin >> subj[i];
		}
	}
	cout << endl;
}
	
void Student::calc() {
	for (int i = 0; i < SUBJ; i++)
		subj[SUBJ] += subj[i];
	avg = (double)subj[SUBJ] / SUBJ;

	switch ((int)avg/10) { //90 80 70 앞자만 띄기위해 10으로 나눔
		//9.9가 9로 나오게 int로 변환
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
	}//점수가 같으면 석차를 올리지X

	int main() {
		/*int INNON;
		cin >> INNON;*/
		//Student stu[INNON]; //정적
		//동적
		//Student* stu = new Student[INNON]; 생성자 호출 0
		Student* stu[INNON]; //생성자 호출X  new안해야함

		//for () {
		//	stu[i] = new Student; //생성자 호출이 일어남
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
