/*
���α׷� ����: cin���� Ű �Է� ����

�ۼ���: 2022.11.21.
*/

#include<iostream>

using namespace std;

int main() {
	int ch;
	int cnt = 0;

	//�� ���ھ� �д� get
	cout << "�� ���ھ� �д� int cin.get() �Լ� �̿�" << endl;
	while ((ch = cin.get()) != EOF) {
		if (ch == '\n')
			break;

		if (ch == 'a') cnt++;
	}
	cout << cnt << endl;

	char c;
	int count = 0;

	cout << "�� ������ �д� istream& get(char& ch) �Լ� �̿�" << endl;
	while (true) {
		//ctrl+z �� �Է��� ���� �˸��� ���� �ԷµǸ�, 
		// ���������� �����ϴ� bit���� ���� 1���� 0���� Ȯ����. (1: �Է��� ���� ��Ÿ���� ���� �Էµ�.)
		cin.get(c);
		
		
		if (cin.eof()) // ��Ʈ���� ���� 1�̸�
			break;
		else if (c == '\n') break;
		else if (c== ' ') count++;
	}

	cout<<count<<endl;
}