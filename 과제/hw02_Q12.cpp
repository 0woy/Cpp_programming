/*
이름: 박윤아
학번: 20204624 
제출일: 2022.10.15.

연습문제 5장 12번
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
	cout << size << "개 점수 입력>> ";
	for (int i = 0; i < size; i++)
		cin >> scores[i];
}

bool Dept::isOver60(int index) {
	if (scores[index] > 60)
		return true;
	else
		return false;
}

// 참조 매개변수로 Dept 객체를 받아주면 됨
int countPass(Dept &dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i))count++;
	}
	return count;
}

int main() {

	cout << "이름: 박윤아\n학번:20204624\n" << endl;
	Dept com(10);
	com.read();
	int n = countPass(com);	//복사 생성자가 호출되는 곳
	cout << "60점 이상은 " << n << "명";
}