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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}

	string getTitle() { return title; }
	
	friend bool operator ==(Book a, int price);
	friend bool operator ==(Book a, string title);
	friend bool operator ==(Book a, Book book);
};
/* 연산자 함수가 클래스의 멤버일 때
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
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500), c("명품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == c) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교 
}