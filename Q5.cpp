#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {

	string text;
	srand((unsigned)time(0));

	while (true) {
		cout << "아래에 한 줄을 입력하세요 (exit 종료)>> ";
		getline(cin, text);
		if (text =="exit")
			break;
		int len = text.length();
		int pos = rand() % len;
		int c = rand()%26;
		char ch = 'a' + c; // character + 정수 = 정수 만큼 뒤에있는 문자.

		if (text.at(pos) == ch)
			ch = 'A' + c;
		
		text.at(pos) = ch;

		cout << text << endl;


	}


	return 0;
}