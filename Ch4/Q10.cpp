#include<iostream>

using namespace std;

class Person {
	string name;
public:
	Person() { this->name = "Nothing"; }
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName( string name) {
		this->name = name;
	}

};

class Family {
	Person* p;
	string name;
	int size;

public:
	Family(string name, int size) {
		this->size = size;
		p = new Person[size];
		this->name = name;
	}

	void setName(int idx, string name) {
		p[idx].setName(name);
	}

	void show() {
		cout << "Simpson ������ ������ ���� " << size << "�� �Դϴ�." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getName() << "\t";
		}
	}


	~Family() {
		delete [] p;
	}
};

int main() {

	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");

	simpson->show();

	delete simpson;
}