#include<iostream>
#include<cstring> // stcmp ����
using namespace std;

void get1() {
	cout << "cin.get()�� <Enter> Ű���� �Է� �ް� ���" << endl;
	int ch;
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n') break;
	}
}

void get2() {
	cout << "cin.get(char& ch)�� <Enter> Ű���� �Է� �ް� ���" << endl;
	char ch;
	while (true) {
		cin.get(ch);
		if (cin.eof()) break; // EOF�� ������ ����
		cout.put(ch);
		if (ch == '\n') break;
	}

}

void get3() {
	char cmd[80];
	cout << "cin.get(char* str, int n)�� ���ڿ��� �н��ϴ�." << endl;
	while (true) {
		cin.get(cmd, 80);
		if (strcmp(cmd, "exit") == 0)
			break;
		else
			cin.ignore(1);
	}
}

int main() {

	get1();
	get2();
	get3();
	return 0;
}