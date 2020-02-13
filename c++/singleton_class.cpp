#include <iostream>

using namespace std;

class Singleton {
	static Singleton *instance;
	int data,x=0;
	

	// Private constructor so that no objects can be created.
	Singleton() {
		data = 0;
		x++;
	}

public:
	static Singleton *getInstance() {
		if (!instance)
			instance = new Singleton;
		return instance;
	}

	int getData() {
		return this->data;
	}

	int getDatax() {
		return this->x;
	}

	void setData(int data) {
		this->data = data;
	}
};

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton *Singleton::instance = 0;

int main() {
	Singleton *s = s->getInstance();
	cout << s->getData() << endl;
	cout << s->getDatax() << endl;

	s->setData(100);
	cout << s->getData() << endl;
	cout << s->getDatax() << endl;

	Singleton *r = r->getInstance();//this getInstacne call the same incance onject which is created by 's' pointer earlier
	cout << r->getData() << endl;
	cout << r->getDatax() << endl;
	r->setData(20);
	cout << r->getData() << endl;


 return 0;
}