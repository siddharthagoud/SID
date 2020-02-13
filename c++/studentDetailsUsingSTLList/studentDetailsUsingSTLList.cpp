#include<iostream>
#include<list>
#include<iterator>
#include<string>
using namespace std;
struct student
{
	string name;
	int rollno;
	float s1, s2, s3;
};

void showlist(list <student> slist)
{
	list <int> ::iterator i;
	for (i = slist.begin(); i != slist.end(); i++)
	{
		student s=
		cout <<  << "  "<<x.rollno;
	}
}
int main()
{
	
	list <string> x;
	list <float> y;
	int n,rollno;
	string name;
	float s1, s2, s3;
	cout << "enter no of students" << endl;
	cin >> n;
	while(n<3)
	{
		cout << "enter name";
		cin >> name;
		x.push_back(name);

		cout << "enter rollno";
		cin >> rollno;
		s.push_back(rollno);
	
		cout << "enter subject 1 matks";
		cin >> s1;
		s.push_back(s1);
	
		cout << "enter subject 2 matks";
		cin >> s2;
		s.push_back(s2);
	
		cout << "enter subject 3 matks";
		cin >> s3;
		s.push_back(s3);
		n--;
	}
}
