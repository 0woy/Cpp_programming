/*
����: ���� ū ���� return �ϴ� ���ø� �Լ� �����
�ۼ���: 2022.11.14.
*/


#include<iostream>

using namespace std;


template <class T> 
T biggest(T a[], int n) { //(T *a, int n) ���� �ۼ��ص� ��
	
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