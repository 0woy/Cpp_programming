#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0; // ���ÿ� n�� Ǫ���Ѵ�. ������ full�̸� false ����
	virtual bool pop(int& n) = 0; // ���ÿ��� ���� ������ n�� �����Ѵ�. ������ empty�̸� false ����
	virtual int size() = 0; // ���� ���ÿ� ����� ������ ���� ����
};


class IntStack : public AbstractStack {
	int top;
	int capacity;
	int* p;
public:
	IntStack(int n) {
		top = -1;
		capacity = n;
		p = new int[n];
	}

	bool push(int n) override;
	bool pop(int& n) override;
	int size() override { return top; }
};
bool IntStack::push(int n) {
	if (top < capacity-1) {
		p[++top] = n;
		return true;
	}
	else return false;

}

bool IntStack::pop(int& n) {
	if (top>=0) {
		n = p[top--];
		return true;
	}
	else return false;
}
int main() {
	IntStack a(5);
	for (int i = 0; i < 10; i++) { // ó�� 5 ���� ���������� push�ǰ� ���� 5 ���� ���� full�� push ����
		if (a.push(i)) cout << "push ����" << endl;
		else cout << "���� full" << endl;
	}

	int n;
	for (int i = 0; i < 10; i++) { // ó�� 5 ���� ���������� pop�ǰ� ���� 5 ���� ���� empty�� pop ����
		if (a.pop(n)) cout << "pop ���� " << n << endl;
		else cout << "���� empty" << endl;
	}
}