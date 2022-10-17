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
	 bool operator!();
//	friend bool operator!(Book book);
};

// 클래스 멤버 함수로 작성
bool Book::operator!(){
	if(this->price ==0) return true;
	else return false;
}

/* friend 함수로 작성
bool operator!(Book book) {
	if (book.price == 0) return true;
	else return false;
}
*/

int main() {
	Book book("벼룩시장", 0, 50);
	if (!book) cout << "돈 내지 말고 가져가쇼."<< endl;
	else
		cout << "돈 갖고와!" << endl;

}