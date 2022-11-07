#include <iostream>
using namespace std;

class LoopAdder { // �߻� Ŭ����
	string name; // ������ �̸�
	int x, y, sum;
	void read(); // x, y ���� �о� ���̴� �Լ�
	void write(); // sum�� ����ϴ� �Լ�
protected:
	LoopAdder(string name = "") { // ������ �̸��� �޴´�. �ʱ갪�� ""
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // ���� ���� �Լ�. ������ ���鼭 ���� ���ϴ� �Լ�
public:
	void run(); // ������ �����ϴ� �Լ�
};

void LoopAdder::read() { // x, y �Է�
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}
void LoopAdder::write() { // ��� sum ���
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}

void LoopAdder::run() {
	read(); // x, y�� �д´�.
	sum = calculate(); // �������鼭 ����Ѵ�.
	write(); // ��� sum�� ����Ѵ�.
}

//Q3.
class ForLoopAdder : public LoopAdder {
public:
	ForLoopAdder(string name): LoopAdder(name){}
	
protected:
	int calculate()override;

};

int ForLoopAdder::calculate() {
	int sum = 0;
	for (int i = getX(); i <= getY(); i++)
		sum += i;
	return sum;
}

//Q4.
class WhileLoopAdder : public LoopAdder {
public:
	WhileLoopAdder(string name) : LoopAdder(name) {}

protected:
	int calculate()override;
};

int WhileLoopAdder::calculate() {
	int sum = 0;
	int i = getX();
	while (i <= getY()) {
		sum += i;
		i++;
	}
	return sum;
}

class DoWhileLoopAdder: public LoopAdder {
public:
	DoWhileLoopAdder(string name) : LoopAdder(name) {}

protected:
	int calculate()override;
};

int DoWhileLoopAdder::calculate() {
	int sum = 0;
	int i = getX();
	do
	{
		sum += i;
		i++;
	} while (i<=getY());

	return sum;
}



int main() {
	ForLoopAdder forLoop("For Loop");
	forLoop.run();

	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhilLoop("Do While Loop");

	whileLoop.run();
	doWhilLoop.run();
}
