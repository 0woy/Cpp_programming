/*
프로그램 설명: 암호 관리 응용프로그램을 map을 이용하여 작성

작성일: 2022.12.11.
*/

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	map<string, string> unlock;
	bool exit = true;
	
	cout << "***** 암호 관리 프로그램 WHO를 시작합니다. *****" << endl;
	while (exit) {
		int flag;
		cout << "삽입:1, 검사:2, 종료:3 >> ";
		cin >> flag;
		switch (flag) {
		case 1:
		{
			string name, password;
			cout << "이름 암호>> ";
			cin >> name >> password;
			unlock.insert(make_pair(name, password));
			break;
		}
		case 2:
		{
			string name, password;
			cout << "이름? ";
			cin >> name;
			while (true) {
				cout << "암호? ";
				cin >> password;
				if (unlock[name] == password) {
					cout << "통과!!" << endl;
					break;
				}
				else cout << "실패~~" << endl;
			}
			break;
		}
		case 3: exit = false;
		}
	}

	cout << "프로그램을 종료합니다. . ." << endl;

	return 0;
}