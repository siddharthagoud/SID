#include<iostream>
using namespace std;

class shape
{
	protected:
	public:
	virtual void area() = 0;// pure virtual
	virtual void print() = 0;
};

class Recatangel : public shape
{
protected:
	float width, height;
public:
	Recatangel() { cout << "Rectangle default ctor\n";  }
	Recatangel(float a, float b) : width(a), height(b)
	{
	}
	void print()
	{
		cout << "width : " << width << "  " << "height : " << height << endl;
	}
	void area()
	{
		cout << "Area of Rectangle : " << width * height << endl;
	}
};

class Triangel : public Recatangel
{
	public:
	Triangel(float a, float b) : Recatangel(a, b)
	{
		//Recatangel(a, b);
	}
	void print()
	{
		cout << "width : " << width << "  " << "height : " << height << endl;
	}
	void area()
	{
		cout << "Area of Triangel : " << width * height*0.5 << endl;
	}
};

class circle : public shape
{
	float radius;
	public:
	circle(float a) : radius(a)
	{
	}
	void print()
	{
		cout << "Radius : " << radius << endl;
	}
	void area()
	{
		cout << "Area of circle : " << radius *radius* 3.14 << endl;
	}
};

int main()
{
	shape *p;
	//Recatangel R(5, 10);
	Triangel T(2, 2);
	circle C(5);
	/*R.print();// directly acessing with object of same calss
	R.area();
	cout << "/with base  pointer" << endl;
	p = &R; // using base calss pointer acessing derived class members
	p->print();
	p->area();*/
	T.print();
	T.area();
	cout << "/with base pointer" << endl;
	p = &T;
	p->print();
	p->area();
	C.print();
	C.area();
	cout << "/with base pointer" << endl;
	p = &C;
	p->print();
	p->area();

	return 0;
}