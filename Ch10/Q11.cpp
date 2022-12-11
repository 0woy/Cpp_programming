/*
프로그램 설명: 책의 년도, 책이름, 저자 이름을 담은 Book 클래스를 만들고
vector<Book> v; 로 생성한 벡터를 이용하여 책을 입고하고 저자와 년도로 검색하는 프로그램 작성

작성일: 2022.12.11.
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Book {
	int year;
	string name;
	string from;
public:
	Book(int year, string name, string from) {
		this->year = year;
		this->name = name;
		this->from = from;
	}
	string get_from() { return this->from; }
	int get_year() { return this->year; }
	void print() { cout << this->year << "년도, " << this->name << ", " << this->from << endl; }
};

int main() {
	vector <Book> v;
	while (true) {
		int year;
		string name;
		string from;
		cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
		cout << "년도>>";
		cin >> year; cin.ignore();
		if (year == -1) break; 
		cout << "책이름>>";
		getline(cin, name);
		cout << "저자>>";
		getline(cin, from);
		Book tmp(year, name, from);
		v.push_back(tmp);
	}
	cout << "총 입고된 책은" << v.size() << "권 입니다." << endl;
	cout << "검색하고자 하는 저자 이름을 입력하세요>> ";
	string search;
	getline(cin, search);

	for(int i = 0;i<v.size();i++)
		if (v[i].get_from() == search) 
				v[i].print();

	int year;
	cout << "검색하고자 하는 년도를 입력하세요>> ";
	cin >> year;
	for (int i = 0; i < v.size(); i++)
		if (v[i].get_year() == year)
			v[i].print();
	return 0;
}