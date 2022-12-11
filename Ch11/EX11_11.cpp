#include<iostream>
using namespace std;


class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	friend 	ostream& operator << (ostream& stream, Point p);
	friend istream& operator >> (istream& ins, Point &p);
};

ostream& operator << (ostream& stream, Point p) {
	stream << "(" << p.x << ", " << p.y << " )" << endl;
	return stream;
}


istream& operator >> (istream& ins, Point& p) {
	cout << "x ÁÂÇ¥ >>";
	ins >> p.x;
	cout << "y ÁÂÇ¥>> ";
	ins >> p.y;

	return ins;
}

int main() {

	Point p;
	cin >> p;
	cout << p;
}