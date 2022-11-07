#include<iostream>
#include<string>

using namespace std;

class Statistics {
	int *arr;
	int size;
public:
	Statistics() { arr = new int[8]; size = 0; }
	
	bool operator ! () {
		if (this->arr && this->size == 0) return true;
		else return false;
	}

	Statistics& operator << (int data) {
		this->arr[size++] = data;

		return *this;

	}
	void operator ~ () {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void  operator >> (int& avg) {
		avg = 0;
		for (int i = 0; i < size; i++)
			avg += arr[i];
		avg /= size;
	}

	~Statistics() { delete[] arr; }
};

int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이타가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력>> ";
	for (int i = 0; i < 5; i++)
		cin >> x[i];

	for (int i = 0 ; i < 5; i++) stat << x[i]; //삽입
	stat << 100 << 200;

	~stat;	//출력

	int avg;
	stat >> avg; //평균 받기

	cout << "avg =" << avg << endl;

	return 0;
}