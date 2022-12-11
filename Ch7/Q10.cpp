#include<iostream>
using namespace std;


class Statistics {
	int n;
	int* array;
public:
	Statistics(int n = 0) { this->n = n;  array = new int[8]; }

	bool operator !() {
		if (this->n == 0 && this->array) return true;
		else return false;
	}

	Statistics& operator << (int a) {
		this->array[n++] = a;
		return *this;
	}

	void operator ~() {
		for (int i = 0; i < n; i++)
			cout << this->array[i] << ' ';
		cout << endl;
	}

	void operator >> (int& avg) {
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += this->array[i];
		avg = sum / n;
	}

};

int main() {

	Statistics stat;
	if (!stat) cout << "���� ��� �����Ͱ� �����ϴ�." << endl;

	int x[5];
	cout << "5���� ���� �Է�>> ";
	for (int i = 0; i < 5; i++) cin >> x[i];
	for (int i = 0; i < 5; i++)
		stat << x[i];
	stat << 100 << 200;

	~stat;//��� ������ ��� ���

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;
	return 0;
}