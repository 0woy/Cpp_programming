#include<iostream>
using namespace std;

// �迭�� �޾� ���� ū ���� ��ȯ�ϴ� �Լ�
template <class T>
T biggest(T a[], int n) {
	T big = a[0];
	for (int i = 1; i < n; i++)
		if (big < a[i])
			big = a[i];
	return big;
}

// �� �迭�� ���ϴ� �Լ�
template <class T, class K>
bool equalArrays(T a[], K b[], int n) {
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			return false;

	return true;
}

// �迭�� ���Ҹ� �ݴ� ������ ������ �Լ�
template <typename T>
void reverseArray(T* a, int n) {
	for (int i = 0; i < n/2; i++) {
		T tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

// �迭���� ���Ҹ� �˻��ϴ� �Լ�
template <typename T>
bool search(T key,T arr[], int n) {
	int i = 0;
	for (; arr[i] != key && i<n; i++)
		;
	if (i == n) return false;
	else return true;
}

int main() {

	int big[] = { 1,10,100,5,4 };
	cout << biggest(big, 5) << endl;

	int com1[] = { 1,10,100,5,4 };
	int com2[] = { 1,10,100,5,4 };
	if (equalArrays(com1, com2, 5)) cout << "����" << endl;
	else cout << "�ٸ���" << endl;

	int reverse[] = { 1,10,100,5,4 };
	reverseArray(reverse, 5);
	for (int i = 0; i < 5; i++) cout << reverse[i] << ' ';
	cout << endl;

	int ser[] = {1, 10, 100, 5, 4};
	if (search(100,ser, 5)) cout << "100�� �迭�� ���Ե�" << endl;
	else cout << "100�� �迭�� ���Ե��� ����" << endl;

	return 0;
}