#include<iostream>

using namespace std;
template <class T>
class list
{
	struct node
	{
		T data;
		node*next;
	}; 
	node* head;
public:
	list()
	{
		head = NULL;
	}
	void push(T x);
	void display();
	void insert();
	void pop();

		
};


class A {
public:
	virtual void f1() = 0;
	virtual void f2() { }
};

class B : public A {
public:
	virtual void f1() { }

};


template<class T>
void list<T>::push(T x)
{   
	
	node*temp = new node;
	temp->data = x;
	if (head==NULL)
	{
		temp->next =NULL;
		head = temp;
		
	}
	else
	{
		temp->next = head;
		head = temp;
	}
}

template<class T>
void list<T>::display()
{
	node* tmp = head;
	while (tmp!=NULL)
	{
		cout << tmp->data << endl;
		tmp = tmp->next;
	}
}

int main()
{
	list<float> l;
	l.push(5.5);
	l.display();
	l.push(6.3);
	l.display();
	l.push(7.5);
	l.push(8.1);
	l.display();


	B b1;
	A* aptr;
	aptr = &b1;
	aptr->f1();
	aptr->f2();

	return 0; 
}