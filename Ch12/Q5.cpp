/*
���α׷� ����: cpp �ҽ������� �о�� �ּ��� ������ ������ ����Ѵ�.

�ۼ���: 2022.12.05.
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream fin("C:\\Temp\\Q1-4.cpp");

	if (!fin) {
		cout << "���� ����";
		return 0;
	}

	string line;
	bool check = false;
	while (getline(fin, line)) {
		for (int i = 0; i < line.size(); i++) {
			if (line[i] == '/' && line[i + 1] == '/') {
				check = true;
				break;
			}
		}

		if (check) {
			check = false;
			continue;
		}

		cout << line << endl;
	}

}