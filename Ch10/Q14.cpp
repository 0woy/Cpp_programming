/*
���α׷� ����: ��ȣ ���� �������α׷��� map�� �̿��Ͽ� �ۼ�

�ۼ���: 2022.12.11.
*/

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	map<string, string> unlock;
	bool exit = true;
	
	cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ�. *****" << endl;
	while (exit) {
		int flag;
		cout << "����:1, �˻�:2, ����:3 >> ";
		cin >> flag;
		switch (flag) {
		case 1:
		{
			string name, password;
			cout << "�̸� ��ȣ>> ";
			cin >> name >> password;
			unlock.insert(make_pair(name, password));
			break;
		}
		case 2:
		{
			string name, password;
			cout << "�̸�? ";
			cin >> name;
			while (true) {
				cout << "��ȣ? ";
				cin >> password;
				if (unlock[name] == password) {
					cout << "���!!" << endl;
					break;
				}
				else cout << "����~~" << endl;
			}
			break;
		}
		case 3: exit = false;
		}
	}

	cout << "���α׷��� �����մϴ�. . ." << endl;

	return 0;
}