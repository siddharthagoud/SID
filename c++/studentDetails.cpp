#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

void deleteStudent(int x);
void replaceStudent(int y);
void printDetails();

struct student {
	string name;
	int rollNO;
	int subMark[3];
}s[3];

void deleteStudent(struct student* x) {
	x->name = "blank";
	x->rollNO = 0000;
	x->subMark[0] = 0;
	x->subMark[1] = 0;
	x->subMark[2] = 0;
}

void replaceStudent(struct student* y) {
	cout << "Enter name, rollNo,3sub marks rspectively of student :" << y << endl;
	cin>> y->name >> y->rollNO >> y->subMark[0] >> y->subMark[1] >> y->subMark[2];
}

void printDetails() {
	cout << "NAME" << setw(10 ) << "ROLL NO" << setw(5) << "sub 1" << setw(5) << "sub 2" << setw(5) << "sub 3" << endl;
	for (int i = 0; i < 3; i++) {
		cout << s[i].name << setw(3) << s[i].rollNO << setw(3) << s[i].subMark[0] << setw(3) << s[i].subMark[1] << setw(3) << s[i].subMark[2] << endl;
	}
}
int main()
{
	struct student *S = &s[0];
	for (int t = 0; t < 10; t++) {
		int opt;
		cout << "choose an option from below \n 1.Enter 3 students details\n2.delete a student details\n3.replace a student details\n4.printDetails\n5.EXIT " << endl;
		cin >> opt;
		switch (opt)
		{
		case 1: for (int i = 0; i < 3; i++) {
			cout << "Enter name, rollNo,3sub marks rspectively of student :" << i << endl;
			cin >> s[i].name >> s[i].rollNO >> s[i].subMark[0] >> s[i].subMark[1] >> s[i].subMark[2];
		}
				break;
		case 2:int r;
			cout << "Enter student Roll No to delete" << endl;
			cin >> r;
			deleteStudent(&S[r - 1]);
			break;
		case 3:int w;
			cout << "Enter student Roll No to replace" << endl;
			cin >> w;
			replaceStudent(&S[w - 1]);
			break;
		case 4:printDetails();
			break;
		case 5:goto EXIT;
		default:cout << "incorrect entry" << endl;
			break;
		}
	}
EXIT:
	return 0;
}
