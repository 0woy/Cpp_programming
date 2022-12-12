/*
���α׷� ����: �� ���̳ʸ� ������ ���� �������� �˻��ϴ� ���α׷� �ۼ�

�ۼ���: 2022.12.05.

*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool file_compare(const char* f1, const char* f2) {
	ifstream fa(f1, ios::binary);
	ifstream fb(f2,ios::binary);

	if (!fa || !fb) {
		cout << "���� ����";
		exit(0); //return����  ������ �� ������ �ٸ����� �ν�
	}

	int ch1, ch2;
	while ((ch1 = fa.get()) != EOF) {
		ch2 = fb.get();
		if (ch2 == EOF || ch1!= ch2) return false;
	}
	ch2 = fb.get();
	if (ch2 != EOF) return false;

	return true;
}



int main() {
	const char* f1 = "C:\\Temp\\logo.jpg";	//const char* ���·� �Ѱ���� �ϱ� ����!!!
	const char* f2 = "C:\\Temp\\copy.jpg";

	if (file_compare(f1, f2))
		cout << "�� ������ ����" << endl;
	else
		cout << "�� ������ �ٸ���" << endl;
}