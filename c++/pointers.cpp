#include<iostream>
using namespace std;
class siddhu
{
	public:
		int a;
};
int main()
{
	siddhu a; //creating a object
	siddhu* a_ptr;// creating pointer of class type
	a.a=10;
	cout<<"intisalizing without pointer object--> a = "<<a.a<<endl;
	a_ptr=&a;
	a_ptr->a = 30;
	cout<<"initilising with pointer onject---> a = "<<a_ptr->a<<endl;
	// creating pointer to data members if class "siddhu"
	int siddhu::*ptr_s = &siddhu::a;
	a_ptr->*ptr_s = 40;
	cout<<"with data member pointer ---> a = "<<a.*ptr_s<<endl;
	cout<<" a value after data member pointer accesing through object and object pointer\n1--->with object a= "<<a.a<<"\n2--->with  object pointer a= "<<a_ptr->a<<endl;
	return 0;
}

