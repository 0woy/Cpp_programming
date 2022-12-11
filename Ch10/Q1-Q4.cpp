#include<iostream>
using namespace std;

// 배열을 받아 가장 큰 값을 반환하는 함수
template <class T>
T biggest(T a[], int n) {
	T big = a[0];
	for (int i = 1; i < n; i++)
		if (big < a[i])
			big = a[i];
	return big;
}

// 두 배열을 비교하는 함수
template <class T, class K>
bool equalArrays(T a[], K b[], int n) {
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			return false;

	return true;
}

// 배열의 원소를 반대 순서로 뒤집는 함수
template <typename T>
void reverseArray(T* a, int n) {
	for (int i = 0; i < n/2; i++) {
		T tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

// 배열에서 원소를 검색하는 함수
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
	if (equalArrays(com1, com2, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;

	int reverse[] = { 1,10,100,5,4 };
	reverseArray(reverse, 5);
	for (int i = 0; i < 5; i++) cout << reverse[i] << ' ';
	cout << endl;

	int ser[] = {1, 10, 100, 5, 4};
	if (search(100,ser, 5)) cout << "100이 배열에 포함됨" << endl;
	else cout << "100이 배열에 포함되지 않음" << endl;

	return 0;
}