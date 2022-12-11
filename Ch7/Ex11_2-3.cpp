#include<iostream>
#include<cstring> // stcmp 때문
using namespace std;

void get1() {
	cout << "cin.get()로 <Enter> 키까지 입력 받고 출력" << endl;
	int ch;
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n') break;
	}
}

void get2() {
	cout << "cin.get(char& ch)로 <Enter> 키까지 입력 받고 출력" << endl;
	char ch;
	while (true) {
		cin.get(ch);
		if (cin.eof()) break; // EOF를 만나면 종료
		cout.put(ch);
		if (ch == '\n') break;
	}

}

void get3() {
	char cmd[80];
	cout << "cin.get(char* str, int n)로 문자열을 읽습니다." << endl;
	while (true) {
		cin.get(cmd, 80);
		if (strcmp(cmd, "exit") == 0)
			break;
		else
			cin.ignore(1);
	}
}

int main() {

	get1();
	get2();
	get3();
	return 0;
}