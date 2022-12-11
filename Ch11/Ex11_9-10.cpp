#include<iostream>
#include<string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	friend ostream& operator << (ostream& stream, Point p);
};

class Book {
	string title;
	string author;
	string press;

public:
	Book(string title = "", string author = "", string press = "") {
		this->title = title;
		this->author = author;
		this->press = press;
	}

	friend 	ostream& operator << (ostream& stream, Book b);
};



// << ������ �Լ�
ostream& operator << (ostream & stream, Point p) {
	stream << "(" << p.x << ", " << p.y <<" )" << endl;
	return stream;
}

ostream& operator << (ostream& stream, Book b) {
	stream << b.title << ", " << b.press << ", " << b.author << endl;
	return stream;
}

int main() {
	Point p(3, 4);

	cout << p;

	Point q(1, 1000), r(2, 2000);
	cout << q << r;

	Book book("������ �����", "�ѱ� ���ǻ�", "����������");
	cout << book;


}