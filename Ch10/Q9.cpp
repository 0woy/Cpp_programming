/*
����: vector �����̳ʸ� Ȱ���Ͽ� ��հ� ���� ���ϱ�
<<<<<<< HEAD
�ۼ���: 2022.11.14.
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
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>> ";
		cin >> n;
		if (n == 0) break;
		v.push_back(n);
		printV(v);
		cout<< "���= "<<getAvg(v) << endl;
	}

	return 0;
}