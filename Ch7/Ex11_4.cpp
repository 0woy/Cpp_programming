#include<iostream>
#include<cstring>
using namespace std;


int main() {
	char line[80];
	cout << "cin.getline() �Լ��� ������ �н��ϴ�." << endl;
	cout << "exit�� �Է��ϸ� ���� ���� ����" << endl;

	int no = 1;
	while (true) {
		cout << "���� " << no << " >> ";
		cin.getline(line, 80); //delim ='\n'
		if (strcmp(line, "exit") == 0) break;
		cout << "echo -->";
		cout << line << endl;
		no++;
	}

	return 0;
}