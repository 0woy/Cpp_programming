#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0; // 스택에 n을 푸시한다. 스택이 full이면 false 리턴
	virtual bool pop(int& n) = 0; // 스택에서 팝한 정수를 n에 리턴한다. 스택이 empty이면 false 리턴
	virtual int size() = 0; // 현재 스택에 저장된 정수의 개수 리턴
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
	for (int i = 0; i < 10; i++) { // 처음 5 개를 성공적으로 push되고 다음 5 개는 스택 full로 push 실패
		if (a.push(i)) cout << "push 성공" << endl;
		else cout << "스택 full" << endl;
	}

	int n;
	for (int i = 0; i < 10; i++) { // 처음 5 개를 성공적으로 pop되고 다음 5 개는 스택 empty로 pop 실패
		if (a.pop(n)) cout << "pop 성공 " << n << endl;
		else cout << "스택 empty" << endl;
	}
}