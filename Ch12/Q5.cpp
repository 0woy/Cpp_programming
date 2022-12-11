/*
프로그램 설명: cpp 소스파일을 읽어와 주석을 제외한 내용을 출력한다.

작성일: 2022.12.05.
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream fin("C:\\Temp\\Q1-4.cpp");

	if (!fin) {
		cout << "열기 실패";
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