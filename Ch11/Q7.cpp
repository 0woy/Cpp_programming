/*
�����ڸ� �Է��Ͽ� ���� ��� ����

�Ű������� ���� ������: �� �� �����ϸ� ��� ����
�Ű������� �ִ� ������: ����� ������ ��� ����ؾ���.

isprint(ch): ch�� ����� �� �ִ� �������� Ȯ��

*/

#include<iostream>
#include<iomanip>
#include<cmath> //�������� ���ϱ� ���� ����ϴ� �������
using namespace std;


int main() {
	
	cout << "dec\thexa\tchar\tdec\thexa\tchar" << endl;
	for (int i = 0; i < 128; i++) {
		cout << dec << i << '\t' << hex << i << '\t' << (isprint(i) ? (char)i : '.') << '\t';
		if (i % 4 == 3) cout << endl;
	}





	/*cout << left; //���� ����
	cout << setw(15) << "Number" << setw(15) << "Square" << setw(15) << "Square Root" << endl;
	int k = 5;
	for (int i = 0; i < 10; i++) {
		cout << setw(15) << setfill('_') <<i * 5;
		cout << setw(15) << setfill('_') << k*k;
		cout << setw(15) << setfill('_') << setprecision(3) << sqrt((double)k) << endl;
		k += 5;
	}
*/
	return 0;
}