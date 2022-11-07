#include<iostream>
#include<string>

using namespace std;

class ArrayUtility {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int &retSize);
};

int* ArrayUtility::concat(int s1[], int s2[], int size) {
	int* p = new int[size];
	int n = size / 2;

	for (int i = 0; i < n; i++) {
		p[i] = s1[i];
		p[i + n] = s2[i];
	}
	return p;
}

int* ArrayUtility::remove(int s1[], int s2[], int size, int& retSize) {
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) s1[i] = NULL;
		}
	}

	for (int i = 0; i < size; i++) 
		if (s1[i]!=NULL) retSize++;

	int* p = new int[retSize];
	int n = 0;
	for (int i = 0; i < size; i++) {
		if (s1[i] != NULL) {
			p[n] = s1[i];
			n++;
		}
	}

	if (retSize == 0) return NULL;
	else return p;
	
}

int main() {

	int x[5], y[5],size;
	cout << "���� 5�� �Է�, �迭 x�� ����>> ";
	for (int i = 0; i < 5; i++)	cin >> x[i];
	
	cout << "���� 5�� �Է�, �迭 y�� ����>> ";
	for (int i = 0; i < 5; i++)	cin >> y[i];
	
	size = (sizeof(x) + sizeof(y)) / sizeof(int);
	int* tmp =ArrayUtility::concat(x, y, size);
	cout << "��ģ ���� �迭 ���" << endl;
	for (int i = 0; i < 5; i++) cout << tmp[i] << ' ';
	cout << endl;

	
	int retsize = 0;
	size = sizeof(x) / 4;
	tmp = ArrayUtility::remove(x, y, size, retsize);
	cout << "�迭 x���� y�� ���, ������ " <<retsize<< endl;
	for (int i = 0; i < retsize; i++) cout << tmp[i] << ' ';

	return 0;
}