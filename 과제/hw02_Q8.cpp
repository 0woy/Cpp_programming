/*
�̸�: ������
�й�: 20204624
������: 2022.10.15.

�������� 5�� 8��
*/
#include<iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	
	~MyIntStack() { if (p) delete [] p; }
	bool push(int n);
	bool pop(int& n);
};

//���� ������
//�⺻ �����ڸ� ȣ���ϸ�, size�� 1�� ���Ͽ� MyIntStack(int size)�� ȣ���Ѵ�.
MyIntStack::MyIntStack():MyIntStack(1) { }
MyIntStack::MyIntStack(int size) {
	this->p = new int[size];	//size ũ���� �迭�� ����Ű�� ������ p
	this->size = size;	// size �ʱ�ȭ
	this->tos = 0;		// Top of Stack�� 0���� �ʱ�ȭ
}

bool MyIntStack::push(int n) {
	if (tos < size) {
		p[tos++] = n;
		return true;
	}
	else {
		printf("Error: Stack is full");
		return false;
	}
}

bool MyIntStack::pop(int& n) {
	if (tos > 0) {
		n = p[--tos];
		return true;
	}
	else {
		printf("Error: Stack is empty");
		return false;
	}
}

// ���� ������
MyIntStack::MyIntStack(const MyIntStack& s) {

	this->p = new int[s.size];
	this->size = s.size;
	this->tos = s.tos;

	for (int i = 0; i <s.tos; i++) {
		this->p[i] = s.p[i];
	}

}

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	cout << "�̸�: ������\n�й�:20204624\n" << endl;
	int n;
	a.pop(n);
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
}