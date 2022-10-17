/*
�̸�: ������
�й�: 20204624 
������: 2022.10.15.

�������� 5�� 12��
*/
#include<iostream>
using namespace std;

class Dept {
	int size; // the size of scores array
	int* scores; // array's address will be allocated dynamically  
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	
	Dept(const Dept& dept);
	~Dept() { if(scores) delete[] scores; }

	int getSize() { return size; }
	void read();	//Read integers from the keyboard as much as size and save them in scores
	bool isOver60(int index); // if index is bigger than 60, return true
};

/*

Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	this->scores = new int[size];
	for (int i = 0; i < size; i++)
		this->scores[i] = dept.scores[i];
}
*/

void Dept::read() {
	cout << size << "�� ���� �Է�>> ";
	for (int i = 0; i < size; i++)
		cin >> scores[i];
}

bool Dept::isOver60(int index) {
	if (scores[index] > 60)
		return true;
	else
		return false;
}

// ���� �Ű������� Dept ��ü�� �޾��ָ� ��
int countPass(Dept &dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i))count++;
	}
	return count;
}

int main() {

	cout << "�̸�: ������\n�й�:20204624\n" << endl;
	Dept com(10);
	com.read();
	int n = countPass(com);	//���� �����ڰ� ȣ��Ǵ� ��
	cout << "60�� �̻��� " << n << "��";
}