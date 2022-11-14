/*
설명: 가장 큰 값을 return 하는 템플릿 함수 만들기
작성일: 2022.11.14.
*/


#include<iostream>

using namespace std;


template <class T> 
T biggest(T a[], int n) { //(T *a, int n) 으로 작성해도 됨
	
	T big = a[0];

	for (int i = 1; i < n; i++) {
		if (big < a[i])
			big = a[i];
	}
	return big;
}

int main() {

	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;

	double y[] = { 7.5,9.4,11.2,45.6,23.7 };
	cout << biggest(y, 5) << endl;

	string z[] = { "hello", "world", "my", "name is", "youna" };
	cout << biggest(z, 5) << endl;

}