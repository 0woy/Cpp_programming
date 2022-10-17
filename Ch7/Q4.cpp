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
	friend bool operator < (string title, Book b);
};

bool operator < (string title, Book b) {
	return title < b.getTitle();
}

int main() {

	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>> ";
	getline(cin, b);
	if (b < a)	// b는 string 객체이므로 클래스의 멤버함수로 작성할 수 없다.

		cout << a.getTitle() << "이 " << b << "보다 사전적으로 뒤에 있다." << endl;
	else
		cout << a.getTitle() << "이 " << b << "보다 사전적으로 앞에 있다." << endl;

}