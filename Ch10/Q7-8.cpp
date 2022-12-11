#include<iostream>
using namespace std;

//Q8. ������ �ߺ����� Ǯ��
class Comparable {
public:
	virtual bool operator > (Comparable& op2) = 0;
	virtual bool operator < (Comparable& op2) = 0;
	virtual bool operator == (Comparable& op2) = 0;
};

class Circle : public Comparable{
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
	bool operator > (Comparable& op2);
	bool operator < (Comparable& op2);
	bool operator == (Comparable& op2);


};

bool Circle:: operator < (Comparable& op2) {
	Circle* c;
	c = (Circle*)&op2;
	if (this->getRadius() < c->getRadius()) return true;
	else return false;
}

bool Circle:: operator > (Comparable& op2) {
	Circle* c;
	c = (Circle*)&op2;
	if (this->getRadius() > c->getRadius()) return true;
	else return false;
}


bool Circle:: operator == (Comparable& op2) {
	Circle* c;
	c = (Circle*)&op2;
	if (this->getRadius() == c->getRadius()) return true;
	else return false;
}


template <class T>
T bigger(T a, T b) {
	if (a > b) return a;
	else return b;
}

// Q7. �ߺ� �Լ� �ۼ��Ͽ� ������ ���� �ذ�

Circle bigger(Circle a, Circle b) {
	if (a.getRadius() > b.getRadius()) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	cout << a << " �� " << b << " �� ū ����>> " << bigger(a, b) << endl;
	Circle waffle(10), pizza(50), y;
	y = bigger(waffle, pizza);
	cout << "waffle �� pizza �߿� �������� ū ���� >> " << y.getRadius() << endl;

	return 0;
}