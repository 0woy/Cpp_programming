/*
���α׷� ����: å�� �⵵, å�̸�, ���� �̸��� ���� Book Ŭ������ �����
vector<Book> v; �� ������ ���͸� �̿��Ͽ� å�� �԰��ϰ� ���ڿ� �⵵�� �˻��ϴ� ���α׷� �ۼ�

�ۼ���: 2022.12.11.
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
	void print() { cout << this->year << "�⵵, " << this->name << ", " << this->from << endl; }
};

int main() {
	vector <Book> v;
	while (true) {
		int year;
		string name;
		string from;
		cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
		cout << "�⵵>>";
		cin >> year; cin.ignore();
		if (year == -1) break; 
		cout << "å�̸�>>";
		getline(cin, name);
		cout << "����>>";
		getline(cin, from);
		Book tmp(year, name, from);
		v.push_back(tmp);
	}
	cout << "�� �԰�� å��" << v.size() << "�� �Դϴ�." << endl;
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>> ";
	string search;
	getline(cin, search);

	for(int i = 0;i<v.size();i++)
		if (v[i].get_from() == search) 
				v[i].print();

	int year;
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>> ";
	cin >> year;
	for (int i = 0; i < v.size(); i++)
		if (v[i].get_year() == year)
			v[i].print();
	return 0;
}