#include<iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;

public:
	CoffeeMachine(int c, int w, int s);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) 
{	
	coffee = c;
	water = w;
	sugar = s;
}

void CoffeeMachine::drinkEspresso() { coffee -= 1;	water -= 1;}
void CoffeeMachine::drinkAmericano() {	coffee -= 1;	water -= 2;}
void CoffeeMachine::drinkSugarCoffee() { coffee -= 1;	water -= 2;	sugar -= 1;}

void CoffeeMachine::fill() {
	coffee = water = sugar = 10;
}

void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << "\t��:" << water << "\t����: " << sugar << endl;
}

int main() {
	CoffeeMachine java(5, 10, 3);

	cout << "�й�: 20204624\n�̸�: ������" << endl;
	cout << endl;

	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();

}