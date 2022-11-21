/*
설명: vector 컨테이너를 활용하여 평균과 원소 구하기
<<<<<<< HEAD
작성일: 2022.11.14.
=======
>>>>>>> 61cc20b410fb31e58bbc89380540954c50f93f17
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printV(const vector<int> v) {
	for (int i = 0; i < v.size(); i++)
		cout << v.at(i) << ' ';

	cout << endl;
}

double getAvg(const vector<int> v) {
	int sum = 0;
	for (int i = 0; i < v.size(); i++)
		sum += v.at(i);

	return sum / (double)v.size();
}
int main() {
	
	vector<int> v;

	int n;
	
	while (true) {
		int sum = 0;
		cout << "정수를 입력하세요(0을 입력하면 종료)>> ";
		cin >> n;
		if (n == 0) break;
		v.push_back(n);
		printV(v);
		cout<< "평균= "<<getAvg(v) << endl;
	}

	return 0;
}