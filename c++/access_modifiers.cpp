#include<iostream>
using namespace std;
class base
{
	int a;
	protected:
	int c;
	public:
	int b;
	base(int x)
	{ 
		a=x;
		b=x+1;
		c=x+2;
		cout<<"from base cnstructor"<<endl;
		cout<<"a= "<<a<<" b ="<<b<<" c ="<<c<<endl;
	}
	void get(){
		cout<<"from get()----> a= "<<a<<"c= "<<c<<endl;
	}
};
class derived:public base
{
	public:
		int d;
		derived(int s):base(s){
			d=s;
			cout<<"from derived constructor"<<endl;
			cout<<"s="<<s<<"b="<<b<<"c= "<<c<<endl;
		}
};
int main()
{
	base g(4);
	cout<<"from main base"<<endl;
	g.get();
	cout<<"after get()"<<g.b<<endl;
	derived p(5);
	cout<<"from main derived"<<endl;
	//f.print();
	cout<</*p.a<<p.c<<*/p.b<<endl;
	return 0;
}
