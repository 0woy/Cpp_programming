/*
설명: ignore()를 사용하여 특정 문자 이후의 문자열만 출력
*/

#include<iostream>
using namespace std;


int main() {
	
	int ch; //정수 형태로 입력 받는 변수
	int flag;
	cout << "3번문제: 0, 4번 문제:1>>";
	cin >> flag;

	if (flag == 0) {
		//ignore은 입력 받기 전 작성
		cin.ignore(100, ';'); //최대 100개까지, 세미콜론을 만나면 중단하고 출력
		while ((ch = cin.get()) != EOF) {  //입력 받은 ch 값이 EOF가 아닌 경우 반복
			cout << char(ch); //입력한 ch 모두 출력
			if (ch == '\n') {
				cin.ignore(100, ';');
			}
		}

	}

	else {
		while ((ch = cin.get()) != EOF) {
			if (ch == ';') {
				cin.ignore(100, '\n');
				cout << endl;
			}
			else
				cout << char(ch);
		}
	}


	return 0;
}