#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	ifstream fin;
	fin.open("C://Windows//system.ini", ios::in);
	
	fstream fout("C://Temp//test.txt", ios::app);

	if (!fin || !fout) {
		cout << "���� ���� ����" << endl;
		return 0;
	}

	// ���� �ؽ�Ʈ ������ �а� ��� �빮�ڷ� ��ȯ�Ͽ� ���Ͽ� ����
	char ch;
	while (true) {
		fin.get(ch);
		if (fin.eof()) break;
		if (islower(ch)) ch = toupper(ch);
		fout.put(ch);
	}
	
	// ������ �а� ���� ��ȣ�� �ٿ��� ���
	/* fin.getline(char* str, int n) �̿�
 	int no = 1;
	char line[100];
	while (fin.getline(line, 100)) {
		cout <<no++<<" : "<< line << endl;
	}*/

	// string�� getline() �̿�
	int no = 1;
	string line;
	while (getline(fin, line)) {
		cout << no++ << " : " << line << endl;
	}




	return 0;
}