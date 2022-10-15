//P.211 동적할당으로 5개 정수받아 평균 구하기
#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int *p= new int[n];
	int sum = 0;
	cout << "정수 " <<n<<" 개 입력 >> ";
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		sum += p[i];
	}
	float avg = (float)sum / n;
	cout << "평균: " << avg << endl;


	// 메모리 해제 해야함.
	delete [] p;

	return 0;
}