/*
설명: 템플릿 함수로 배열의 합집합, 차집합 구하기
작성일: 2022.11.14.

*/
#include<iostream>
using namespace std;

template<class T>
T* concat(T* a, int n, T* b, int m) {
	T* c = new T[n + m];
	for (int i = 0; i < n; i++)
		c[i] = a[i];

	for (int i = 0; i < m; i++)
		c[i + n] = b[i];

	return c;
}

template<class T>	//배열의 차집합 구하기
T* remove(T* a, int sizea, T* b, int sizeb, int& sizeC) {
	T* c = new T[sizea];
	sizeC = 0;
	int j = 0;
	for (int i = 0; i < sizea; i++) {
		for (j = 0; j < sizeb; j++) {
			if (a[i] == b[j])
				break;
		}
		if (j == sizeb)
			c[sizeC++] = a[i];
	}

	if (sizeC == 0)	{ //C가 공집합일 경우
		delete[] c;
		return NULL;
	}

	T* result = c;

	if (sizeC != sizea) {
		result = new T[sizeC];
		for (int i = 0; i < sizeC; i++)
			result[i] = c[i];
		delete [] c;
	}
	return result;
}

int main() {

	int x[] = { 1,2,3,4,5 };
	int y[] = { 10,20,30,40,50 };

	int* z = concat(x, 5, y, 5);
	for (int i = 0; i < 10; i++) cout << z[i] << ' ';
	cout << endl;

	char a[] = { 'L','O','V','E' };
	char b[] = { 'J','Y','A' };

	char* c = concat(a, 4, b, 3);
	for (int i = 0; i < 7; i++) cout << c[i] << ' ';
	cout << endl;

	delete z;
	delete c;

	int A[] = {1,2,3,4,5};
	int B[] = { 5,6,7,8,9 };
	int sizeC;
	int *C = remove(A, 5, B, 5, sizeC);

	if (!C) cout << "공집합" << endl;

	else 
		for (int i = 0; i < sizeC; i++)
			cout << C[i] << ' ';

	delete[] C;
}