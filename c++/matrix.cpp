#include <iostream>

using namespace std;
class matrix
{

	// static int s;
	int s{ 0 }; // variable intialization
public:
	int a[2][2];
	matrix(){
		cout << "constructor called" << endl;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				s++;
				a[i][j] = s;
			}
		}
		cout << "constructor ended" << endl;
	}
	matrix(const matrix &g)
	{
		cout << "copy constructor called" << endl;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				a[i][j] = g.a[i][j];
			}
		}
		cout << "copy constructor ended" << endl;
	}
	void display();
	matrix operator+(const matrix&);
	matrix operator*(const matrix&);
	//void operator=(const matrix&);
};
// int matrix::s = 0;
matrix matrix::operator+(const matrix& b)
{
	cout << "operator '+' function" << endl;
	matrix sum;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum.a[i][j] = a[i][j] + b.a[i][j];
		}
	}
	cout << "+ operator ended" << endl;
	return (sum);
}
matrix matrix::operator*(const matrix& b)
{
	cout << "operator '*' function" << endl;
	matrix mul;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			mul.a[i][j] = this->a[i][j] * b.a[i][j];
		}
	}
	cout << "* operator ended" << endl;
	return (mul);
}


/*//  '  =  operator'
void matrix::operator=(const matrix& q)
{
	cout << "operator '=' function" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			this->a[i][j] = q.a[i][j];
		}
	}
}
*/
void matrix::display()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{

	matrix a;
	a.display();
	matrix b = a;
	b.display();
	matrix c, *p;
	p = &c;
	cout << "c obj created /->its address is" << p << endl;
	c.display();
	c = a;
	c.display();
	matrix sum; //matrix sum=a+b;
	sum.display();
	sum = a + c;//a.operator+(b);
	sum.display();
	matrix mul = a * b;//a.operator*(b);
	mul.display();
	return 0;
}