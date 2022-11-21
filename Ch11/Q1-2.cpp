/*
프로그램 설명: cin으로 키 입력 연습

작성일: 2022.11.21.
*/

#include<iostream>

using namespace std;

int main() {
	int ch;
	int cnt = 0;

	//한 글자씩 읽는 get
	cout << "한 글자씩 읽는 int cin.get() 함수 이용" << endl;
	while ((ch = cin.get()) != EOF) {
		if (ch == '\n')
			break;

		if (ch == 'a') cnt++;
	}
	cout << cnt << endl;

	char c;
	int count = 0;

	cout << "한 라인을 읽는 istream& get(char& ch) 함수 이용" << endl;
	while (true) {
		//ctrl+z 로 입력의 끝을 알리는 값이 입력되면, 
		// 상태정보를 저장하는 bit열에 가서 1인지 0인지 확인함. (1: 입력의 끝을 나타내는 값이 입력됨.)
		cin.get(c);
		
		
		if (cin.eof()) // 비트열의 값이 1이면
			break;
		else if (c == '\n') break;
		else if (c== ' ') count++;
	}

	cout<<count<<endl;
}