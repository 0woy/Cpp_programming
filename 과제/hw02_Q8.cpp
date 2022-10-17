/*
이름: 박윤아
학번: 20204624
제출일: 2022.10.15.

연습문제 5장 8번
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

//위임 생성자
//기본 생성자를 호출하면, size를 1로 정하여 MyIntStack(int size)를 호출한다.
MyIntStack::MyIntStack():MyIntStack(1) { }
MyIntStack::MyIntStack(int size) {
	this->p = new int[size];	//size 크기의 배열을 가리키는 포인터 p
	this->size = size;	// size 초기화
	this->tos = 0;		// Top of Stack을 0으로 초기화
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

// 복사 생성자
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

	cout << "이름: 박윤아\n학번:20204624\n" << endl;
	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}