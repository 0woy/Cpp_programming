#include<iostream>
using namespace std;

//Q8. 연산자 중복으로 풀기
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

// Q7. 중복 함수 작성하여 컴파일 오류 해결

Circle bigger(Circle a, Circle b) {
	if (a.getRadius() > b.getRadius()) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	cout << a << " 와 " << b << " 중 큰 값은>> " << bigger(a, b) << endl;
	Circle waffle(10), pizza(50), y;
	y = bigger(waffle, pizza);
	cout << "waffle 과 pizza 중에 반지름이 큰 것은 >> " << y.getRadius() << endl;

	return 0;
}