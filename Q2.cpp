//P.211 �����Ҵ����� 5�� �����޾� ��� ���ϱ�
#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int *p= new int[n];
	int sum = 0;
	cout << "���� " <<n<<" �� �Է� >> ";
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		sum += p[i];
	}
	float avg = (float)sum / n;
	cout << "���: " << avg << endl;


	// �޸� ���� �ؾ���.
	delete [] p;

	return 0;
}