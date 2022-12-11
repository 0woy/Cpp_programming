/*
���α׷� ����: ���� �迭�� �׻� ���� ������ �����ϴ� Ŭ���� �ۼ�.

�ۼ���: 2022.12.11.
*/

#include<iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	//void sort();

public:
	SortedArray() { this->p = NULL; this->size = 0; }	// p = NULL, size =0 �ʱ�ȭ
	
	SortedArray(SortedArray& src){	//���� ������
		this->size = src.size;
		this->p = new int[this->size];
		for (int i = 0; i < src.size; i++)
			this->p[i] = src.p[i];
	}

	//������
	SortedArray(int p[], int size) {
		this->p = new int[size];
		this->size = size;
		for (int i = 0; i < size; i++)
			this->p[i] = p[i];
	}

	// �Ҹ���
	~SortedArray() { delete [] p; }

	// ���� �迭�� op2 �迭 �߰�
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

	// ���� �迭�� op2 �迭 ����
	SortedArray& operator = (const SortedArray& op2) {
		delete[]p; // �迭 �޸� delete
		this->size = op2.size;
		this->p = new int[this->size];
		for (int i = 0; i < op2.size; i++) {
			this->p[i] = op2.p[i];
		}
		return *this;

	} 

	//�迭�� ���� ���
	void show() {
		cout << "�迭 ��� : ";
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