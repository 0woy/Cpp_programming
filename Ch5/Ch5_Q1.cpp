#include<iostream>

using namespace std;

class Circle {
	int radius;
public:

	Circle() { radius = 1;}
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	int getRadius() {
		return this->radius;
	}
};

void swap(Circle& a, Circle& b) {
	Circle tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	Circle a(10), b(20);
	cout << "a의 반지름: " << a.getRadius() << endl;
	cout << "b의 반지름: " << b.getRadius() << endl;
	swap(a, b);

	cout << "a의 반지름: " << a.getRadius() << endl;
	cout << "b의 반지름: " << b.getRadius() << endl;


}