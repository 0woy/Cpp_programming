#include<iostream>
using namespace std;


class BaseArray {
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}

	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray{
	int start;
	int end;
public:
	MyQueue(int capacity) :BaseArray(capacity) {
		start = 0;
		end = 0;
	}
	void enqueue(int n) { put(end, n); end++; }
	int capacity() {return getCapacity();}
	int length() { return end - start; }
	int dequeue() { return get(start++); }
	
};

class MyStack :public BaseArray {
	int top;
public:
	MyStack(int capacity) : BaseArray(capacity) {
		top = -1;
	}
	void push(int n) { return put(++top, n); }
	int capacity() { return getCapacity(); }
	int length() { return top; }
	int pop() { return get(top--); }


};
int main() {

	MyQueue mq(100);
	int n;

	cout << "큐에 삽입할 5개의 정수 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mq.enqueue(n);
	}

	cout << "큐의 용량:" << mq.capacity() << ", 큐의 크기" << mq.length() << endl;
	cout << "큐의 원소를 순서대로제거하여 출력>> ";
	while (mq.length() != 0) {
		cout << mq.dequeue() << ' ';
	}
	cout << endl;
	cout << "큐의 현재 크기>>" << mq.length() << endl;


	MyStack mStack(100);
	cout << "스택에 삽입할 5개의 정수 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);
	}

	cout << "스택의 용량:" << mStack.capacity() << ", 스택의 크기" << mStack.length() << endl;
	cout << "스택의 원소를 순서대로제거하여 출력>> ";
	while (mStack.length() != -1) {
		cout << mStack.pop() << ' ';
	}

	cout << endl;
	cout << "스택의 현재 크기>>" << mStack.length() << endl;




	return 0;
}