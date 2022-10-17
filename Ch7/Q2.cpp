#include<iostream>
#include<string>
using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}

	string getTitle() { return title; }
	
	friend bool operator ==(Book a, int price);
	friend bool operator ==(Book a, string title);
	friend bool operator ==(Book a, Book book);
};
/* ������ �Լ��� Ŭ������ ����� ��
bool Book::operator==(int price) {
	return this->price == price;
}

bool Book::operator==(string title) {
	return this->getTitle() == title;
}

bool Book::operator==(Book& book) {
	return  *this == book.price &&
			*this == book.getTitle() &&
			this->pages == book.pages;
}
*/

bool operator==(Book a, int price) {
	return a.price == price;
}

bool operator==(Book a, string title) {
	return a.getTitle() == title;
}

bool operator==(Book a, Book book) {
	return
		a == book.price &&
		a == book.getTitle() &&
		a.pages == book.pages;
}

int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500), c("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl; // price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if (a == c) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� �� 
}