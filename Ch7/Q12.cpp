/*
프로그램 설명: 정수 배열을 항상 증가 순으로 유지하는 클래스 작성.

작성일: 2022.12.11.
*/

#include<iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	//void sort();

public:
	SortedArray() { this->p = NULL; this->size = 0; }	// p = NULL, size =0 초기화
	
	SortedArray(SortedArray& src){	//복사 생성자
		this->size = src.size;
		this->p = new int[this->size];
		for (int i = 0; i < src.size; i++)
			this->p[i] = src.p[i];
	}

	//생성자
	SortedArray(int p[], int size) {
		this->p = new int[size];
		this->size = size;
		for (int i = 0; i < size; i++)
			this->p[i] = p[i];
	}

	// 소멸자
	~SortedArray() { delete [] p; }

	// 현재 배열에 op2 배열 추가
	SortedArray operator + (SortedArray& op2) {
		SortedArray test;
		test.size = this->size + op2.size;
		test.p = new int[test.size];
		for (int i = 0; i < test.size; i++)
			if (i < this->size)
				test.p[i] = this->p[i];
			else
				test.p[i] = op2.p[i - (test.size - op2.size)];
		
		return test;
	} 

	// 현재 배열에 op2 배열 복시
	SortedArray& operator = (const SortedArray& op2) {
		delete[]p; // 배열 메모리 delete
		this->size = op2.size;
		this->p = new int[this->size];
		for (int i = 0; i < op2.size; i++) {
			this->p[i] = op2.p[i];
		}
		return *this;

	} 

	//배열의 원소 출력
	void show() {
		cout << "배열 출력 : ";
		for (int i = 0; i < size; i++)
			cout << this->p[i] << ' ';
		cout << endl;
	} 
};


int main() {

	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };

	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;
	a.show();
	b.show();
	c.show();


	return 0;
}