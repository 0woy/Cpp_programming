// P213, Q3 ���� ã��
#include<iostream>
#include<string>
using namespace std;

int main() {

	string str;
	cout << "���ڿ� �Է� >> ";
	getline(cin, str);

	char s;
	cout << "ã�� ���� ���� �Է�>> ";
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == s)
			cnt++;
	}
	cout << "���� "<<s<<"�� ������ " << cnt << "��";

	return 0;
}