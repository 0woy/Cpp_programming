// P212, Q6 ���ڿ� ������
#include<iostream>
#include<string>

using namespace std;

int main() {
	string text;
	while (true) {
		cout << "�Ʒ� �� ���� �Է��ϼ��� (exit ����)>> ";
		getline(cin, text);
		if (text == "exit")
			break;

		int len = text.length();
		for (int i = 0; i < len / 2;i++) {
			char tmp = text.at(i);
			text.at(i) = text.at(len - i-1);
			text.at(len - i - 1) = tmp;
		}
		cout << text << endl;
	}
	return 0;
}