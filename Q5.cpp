#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {

	string text;
	srand((unsigned)time(0));

	while (true) {
		cout << "�Ʒ��� �� ���� �Է��ϼ��� (exit ����)>> ";
		getline(cin, text);
		if (text =="exit")
			break;
		int len = text.length();
		int pos = rand() % len;
		int c = rand()%26;
		char ch = 'a' + c; // character + ���� = ���� ��ŭ �ڿ��ִ� ����.

		if (text.at(pos) == ch)
			ch = 'A' + c;
		
		text.at(pos) = ch;

		cout << text << endl;


	}


	return 0;
}