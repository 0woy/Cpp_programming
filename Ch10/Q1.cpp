/*
����: ���� ū ���� return �ϴ� ���ø� �Լ� �����
�ۼ���: 2022.11.14.
*/

#include<iostream>
using namespace std;

template <class T>  // ���� ū ���� ��ȯ �ϴ� �Լ�
T biggest(T a[], int n) { //(T *a, int n) ���� �ۼ��ص� ��
	
	T big = a[0];

	for (int i = 1; i < n; i++) {
		if (big < a[i])
			big = a[i];
	}
	return big;
}

template <class T, class K>	// �� �迭�� ������ Ȯ���ϴ� �Լ�
bool equalArrays(T* a, K* b, int n) {
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			return false;

	return true;
}

template<class T>	// �迭�� ���Ҹ� �ݴ� ������ ������ �Լ�
void reverseArray(T * a, int n) {
	for (int i = 0; i < n / 2; i++) {
		int tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

template<class T> // �迭���� ���� �˻� �ϴ� �Լ�
bool search(int key, T* a, int n) {
	for (int i = 0; i < n; i++)
		if (key == a[i])
			return true;

	return false;
}

int main() {

	//Q1. ���� ū �� ���ϱ�
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;

	double y[] = { 7.5,9.4,11.2,45.6,23.7 };
	cout << biggest(y, 5) << endl;

	string z[] = { "hello", "world", "my", "name is", "youna" };
	cout << biggest(z, 5) << endl;

	//Q2. �� �迭�� ������ Ȯ��
	int xx[] = { 1,10,100,5,4 };
	double xy[] = { 1.0,10.0,100.0,5.0,4.5 };

	if (equalArrays(x, xx, 5))
		cout << "Equal" << endl;
	else cout << "NOT Equal" << endl;


	//Q3. �迭�� ���� �ݴ�� ������
	reverseArray(x, 5);
	cout << "Reverse Array: ";
	for (int i = 0; i < 5; i++)
		cout <<x[i] << ' ';
	cout << endl;

	//Q4. Ư�� ���� �˻��ϱ�
	cout << "�迭���� ã�� ���� �Է�>> ";
	int sn;
	cin >> sn;
	if (search(sn, x, 5)) cout << sn << "�� �迭 ���ο� �ִ�." << endl;
	else cout << sn << "�� �迭 ���ο� ����." << endl;

}