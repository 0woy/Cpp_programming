#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;

	cout << "���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�. (�ѱ� �� ��). " << endl;

	getline(cin, s);
	int len = s.length();

	for (int i = 0; i < len; i++) {
//		string f = s.substr(0, 1);	// �� �� ���ڸ� �ڷ� ������
		string last = s.substr(len - 1, 1);	// �� �� ���ڸ� ������ ������
		string sub = s.substr(0, len - 1);

		s =  last+sub;
		cout << s << endl;
	}
}