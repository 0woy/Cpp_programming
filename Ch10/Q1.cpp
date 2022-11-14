/*
설명: 가장 큰 값을 return 하는 템플릿 함수 만들기
작성일: 2022.11.14.
*/

#include<iostream>
using namespace std;

template <class T>  // 가장 큰 값을 반환 하는 함수
T biggest(T a[], int n) { //(T *a, int n) 으로 작성해도 됨
	
	T big = a[0];

	for (int i = 1; i < n; i++) {
		if (big < a[i])
			big = a[i];
	}
	return big;
}

template <class T, class K>	// 두 배열이 같은지 확인하는 함수
bool equalArrays(T* a, K* b, int n) {
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			return false;

	return true;
}

template<class T>	// 배열의 원소를 반대 순서로 뒤집는 함수
void reverseArray(T * a, int n) {
	for (int i = 0; i < n / 2; i++) {
		int tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

template<class T> // 배열에서 원소 검색 하는 함수
bool search(int key, T* a, int n) {
	for (int i = 0; i < n; i++)
		if (key == a[i])
			return true;

	return false;
}

int main() {

	//Q1. 가장 큰 값 구하기
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;

	double y[] = { 7.5,9.4,11.2,45.6,23.7 };
	cout << biggest(y, 5) << endl;

	string z[] = { "hello", "world", "my", "name is", "youna" };
	cout << biggest(z, 5) << endl;

	//Q2. 두 배열이 같은지 확인
	int xx[] = { 1,10,100,5,4 };
	double xy[] = { 1.0,10.0,100.0,5.0,4.5 };

	if (equalArrays(x, xx, 5))
		cout << "Equal" << endl;
	else cout << "NOT Equal" << endl;


	//Q3. 배열의 원소 반대로 뒤집기
	reverseArray(x, 5);
	cout << "Reverse Array: ";
	for (int i = 0; i < 5; i++)
		cout <<x[i] << ' ';
	cout << endl;

	//Q4. 특정 원소 검색하기
	cout << "배열에서 찾을 내용 입력>> ";
	int sn;
	cin >> sn;
	if (search(sn, x, 5)) cout << sn << "은 배열 내부에 있다." << endl;
	else cout << sn << "은 배열 내부에 없다." << endl;

}