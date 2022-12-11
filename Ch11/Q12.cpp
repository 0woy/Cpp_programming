#include<iostream>
using namespace std;

class CoffeeMachine {
	int coffee, sugar, cream, water, cup;
public:
	CoffeeMachine(int coffee = 3, int sugar = 3, int cream = 3, int water = 3, int cup = 3) {
		this->coffee = coffee;
		this->sugar = sugar;
		this->cream = cream;
		this->water = water;
		this->cup = cup;
	}
	void print();
	void sugar_coffee();
	void basic_coffee();
	void black_coffee();
	bool lack() {
		if (coffee < 0 || sugar < 0 || cream < 0 || water < 0 || cup < 0) {
			cout << "�� ��� �����ϳ׿� �� ����" << endl;
			return true;
		}
		else return false;
	}

	void fill() {
		cout << "��� ���� ä��ϴ�~~" << endl;
		this->sugar = 5;
		this->water = 5;
		this->coffee = 5;
		this->cup = 5;
		this->cream = 5;
		print();
	}
};

void CoffeeMachine::sugar_coffee() {
	cout << "���ִ� ����Ŀ�� ���Խ��ϴ�~~" << endl;
	this->sugar--;
	this->coffee--;
	this->water--;
	this->cup--;
	if (lack()) {
		this->sugar++;
		this->coffee++;
		this->water++;
		this->cup++;
	}
	print();
}

void CoffeeMachine::basic_coffee() {
	cout << "�׳� ����Ŀ�� ���Խ��ϴ�~~" << endl;
	this->coffee--;
	this->water--;
	this->cream--;
	this->cup--;
	if (lack()) {
		this->coffee++;
		this->water++;
		this->cream++;
		this->cup++;
	}
	print();
}

void CoffeeMachine::black_coffee() {
	cout << "���� �� �� Ŀ�� ���Խ��ϴ�~~" << endl;
	this->coffee-=2;
	this->water--;
	this->cup--;
	if (lack()) {
		this->coffee += 2;
		this->water++;
		this->cup++;
	}
	print();
}

void CoffeeMachine::print() {
	cout << "COFFEE"<<'\t';
	for (int i = 0; i < coffee ;i++)
		cout << "*";

	cout << endl;
	cout << "SUGAR" << '\t';
	for (int i = 0; i < sugar; i++)
		cout << "*";

	cout << endl;
	cout << "CREAM" << '\t';
	for (int i = 0; i < cream; i++)
		cout << "*";

	cout << endl;
	cout << "WATER" << '\t';
	for (int i = 0; i < water; i++)
		cout << "*";

	cout << endl;
	cout << "CUP" << '\t';
	for (int i = 0; i < cup; i++)
		cout << "*";

	cout << endl;
}

int main() {

	CoffeeMachine cm;
	cout << "---- ��ǰ Ŀ�� ���Ǳ� �մϴ�. ------" << endl;
	cm.print();

	bool exit = true;
	while (exit) {
		int flag;
		cout << "���� Ŀ��:0, ����Ŀ��:1, �� Ŀ��:2, ä���: 3, ����:4 >>";
		cin >> flag;

		switch(flag){
		case 0:
			cm.basic_coffee();
			break;
		case 1:
			cm.sugar_coffee();
			break;
		
		case 2:
			cm.black_coffee();
			break;
		case 3:
			cm.fill();
			break;
		case 4:
			exit = false;
			break;
		}
	}

	cout << "���Ǳ� ���� ����~" << endl;



	return 0;
}