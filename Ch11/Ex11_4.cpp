#include<iostream>
#include<cstring>
using namespace std;


int main() {
	char line[80];
	cout << "cin.getline() 함수로 라인을 읽습니다." << endl;
	cout << "exit를 입력하면 무한 루프 종료" << endl;

	int no = 1;
	while (true) {
		cout << "라인 " << no << " >> ";
		cin.getline(line, 80); //delim ='\n'
		if (strcmp(line, "exit") == 0) break;
		cout << "echo -->";
		cout << line << endl;
		no++;
	}

	return 0;
}